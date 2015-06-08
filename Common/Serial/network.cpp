//
// FractalConcept - 2002-2004
// Rémi Prud'homme, Marc Battyani
//
#include "stdafx.h"
#include "network.h"
#include "TraceFunction.h"
#include "fcs.h"

#include "Monitor.h"

extern FullDuplexMonitor Mon;


extern DebugOutputTrace StandartDebugOutput;

#define Debug(s) StandartDebugOutput.OutputDebug(LEVEL_RUNTIME ,s)

int NetworkError;

#define BOF 0xC4

void DumpFrame ( pFrame Frame , unsigned char * Buffer, int Len);

///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
// Couche Résau
///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////

unsigned short ComputeCrc(pFrame NewFrame,  unsigned char * Buffer, int Len)
{
  unsigned short crc = ComputeFCS(-1, (unsigned char *)&NewFrame->Time, 5 );

  if ( Len > 0 && Buffer != NULL ) 
    return ~ComputeFCS( crc, Buffer, Len );
  else
    return ~crc;
}

char CheckFrame(pFrame NewFrame,  unsigned char * Buffer, int Len)
{
  unsigned crc = ComputeCrc( NewFrame,  Buffer,  Len);

  if ((crc == NewFrame->CRC) == 0 )
    {
    StandartDebugOutput.OutputDebug(LEVEL_RUNTIME ,"Crc recu 0x%02x, Crc calculé 0x%02x ", NewFrame->CRC, crc); 
    }

  return  crc == NewFrame->CRC;
}

void SendFrame( pFrame NewFrame,  unsigned char * Buffer, int Len)
{
  NewFrame->CRC = ComputeCrc( NewFrame, Buffer, Len);

  Mon.m_Serial.Send( (unsigned char *)"HHHHHHHHHH", 10);

  Mon.m_Serial.Send( (unsigned char *)NewFrame, sizeof(Frame));
  if ( Len ) 
    Mon.m_Serial.Send(Buffer, Len);
}


int ReceiveFrame( pFrame NewFrame,  unsigned char * Buffer, unsigned int* Len)
{

  if ( Mon.ReceiveFrame( NewFrame, Buffer, Len) )
    {
      // CRC correct ?
      if ( CheckFrame(NewFrame, Buffer, *Len ) )
        {
          NetworkError = ERROR_SUCCESS;
          return ERROR_SUCCESS;
        }
      else
        {
          NetworkError = ERROR_BADCRC;
          Debug("ReceiveFrame ERROR_BADCRC"); 
//          if ( Buffer !=  NULL )
//            DumpFrame( NewFrame, Buffer, * Len);
          return ERROR_BADCRC;
        }
    }
  else
    {
    NetworkError = ERROR_TIMEOUT;
    // Time-out expired 
    return ERROR_TIMEOUT;
    }
}



///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
// Couche Transport
///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////
char MspSend(  unsigned char *Buffer, int Len, unsigned int NbTry)
{
  Frame NewFrame, NewFrame2;
  unsigned int  TryCount;
  int CodeRetour = ERROR_SUCCESS;
  unsigned int LenZero = 0;

  NewFrame.Size = Len;
  NewFrame.Type = 0;
  // temporaire
  NewFrame.Time = 0; 
  NewFrame.Bof = BOF;

  for ( TryCount = 0 ; TryCount < NbTry ; TryCount++)
    {
      // Envoie de la commande
      SendFrame(&NewFrame, Buffer, Len);
      
      // Attente de la trame retour portant un ACK
      if ( (CodeRetour = ReceiveFrame( &NewFrame2, NULL ,&LenZero)) == ERROR_SUCCESS)
        {
          // Est ce un ack ?
          if ( NewFrame2.Type == 0x66 )
            {
              // C'est un ack, tout va bien
              StandartDebugOutput.OutputDebug(LEVEL_RUNTIME ,"MpsSend ACK recu, %d", TryCount); 
              break;
            }
        }
      else
        {
        // Soit timeout ou bien CRC
        }
    }

  //
  // Transmition ratée: on passe en mode découverte
  //
  return CodeRetour;
}

bool MspSendWithoutAck(unsigned char *Buffer, int Len)
  {
  Frame NewFrame;
  int CodeRetour = ERROR_SUCCESS;

  NewFrame.Size = Len;
  NewFrame.Type = 0;
  // temporaire
  NewFrame.Time = 0; 
  NewFrame.Bof = BOF;

  // Envoie de la commande
  SendFrame(&NewFrame, Buffer, Len);
  return true;
  }

char MspSendWithReply(  unsigned char *BufferOut, int LenOut,  unsigned char *BufferIn , int * LenIn, unsigned int NbTry)
{
  Frame NewFrame, NewFrame2;
  unsigned int  TryCount;
  int LenZero = 0;
  int CodeRetour = ERROR_SUCCESS;

  unsigned int LenRecu = * LenIn;

  NewFrame.Size = LenOut;
  NewFrame.Type = 0;
  NewFrame.Time = 0;
  NewFrame.Bof = BOF;

  NewFrame2.Type = 0;

  for ( TryCount = 0 ; TryCount < NbTry ; TryCount++)
    {
      SendFrame(&NewFrame, BufferOut, LenOut);
      
      // Wait de ACK
      if ( ( CodeRetour = ReceiveFrame( &NewFrame2, BufferIn ,&LenRecu)) == ERROR_SUCCESS)
        {
          if ( NewFrame2.Type == 0x66  && (LenRecu ==  *LenIn))
            {
              *LenIn = LenRecu;
              CodeRetour = ERROR_SUCCESS;
              break;
            }
     
          // Le nack a  été recu et  Ré emission
          if ( NewFrame2.Type == 0x77 )
            {
            }
       }
    }
  //
  // Transmition ratée: on passe en mode découverte
  //
  return CodeRetour;
}
char MspSendAck( unsigned char Type)
{
  Frame NewFrameAck;
  
  NewFrameAck.Bof = BOF;
  NewFrameAck.Size = 0;
  NewFrameAck.Type = Type;
  SendFrame(&NewFrameAck, NULL , 0);  
  return true;
}

char MspRecv(  unsigned char **Buffer, unsigned int* Len )
{
  Frame NewFrameUser;
  
  if ( ReceiveFrame( &NewFrameUser , *Buffer, Len) == ERROR_SUCCESS)
    {
       MspSendAck(FRAME_ACK);
       return true;
	  }
  else
    {
        MspSendAck(FRAME_NACK);
        return false;
    }
  
  // pas de trame ?
  return false;
}





//
// Utilisatiares
//

void DumpFrame ( pFrame Frame , unsigned char * Buffer, int Len)
  {
   StandartDebugOutput.OutputDebug(LEVEL_RUNTIME , "Len : 0x%x, Address : 0x%x, Type : 0x%x, CRC : 0x%04x ",Len, Frame->Time, Frame->Type, Frame->CRC );

   if ( Len > 0 )
     {
       for ( int i = 0; i < Len ; i += 16 )
         {
         StandartDebugOutput.OutputDebug(LEVEL_RUNTIME , "0x%04x : 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x   0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x",
                                         i,  Buffer[i], Buffer[i+1],Buffer[i+2],Buffer[i+3],Buffer[i+4],Buffer[i+5],Buffer[i+6],Buffer[i+7], 
                                         Buffer[i+8], Buffer[i+9],Buffer[i+10],Buffer[i+11],Buffer[i+12],Buffer[i+13],Buffer[i+14],Buffer[i+15]);


        }
     }
  }


              

