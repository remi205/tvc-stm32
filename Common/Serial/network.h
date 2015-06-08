//
// FractalConcept - 2002-2004
// Rémi Prud'homme, Marc Battyani
//

#pragma once


#pragma pack(1)
// Taille : 6 minimal, un champ de bit sur version et Message Type.
typedef struct Frame
{
  unsigned char Bof;
  unsigned char Size;
  unsigned long Time; // En fait, c'est le serial number ou une address 
  unsigned char Type ;   // Si null, le Type est dans les données qui suivront.
                         // Utile pour ACK et NACK. 

  unsigned short CRC;
  
  // user data
  } * pFrame, Frame;

  
typedef struct _FrameRx
{
  unsigned long Time; // En fait, c'est le serial number ou une address 
  unsigned char Type ; // Si null, le Type est dans les données qui suivront.
                       // Utile pour ACK et NACK. 

  unsigned short CRC;
  
  // user data
  } * pFrameRx, FrameRx;  


#pragma pack()



#ifndef WIN32
#define ERROR_SUCCESS 0
#define ERROR_TIMEOUT 1
#endif

#define ERROR_BADCRC  2
#define ERROR_NACK    3

extern int NetworkError;

#define TIMEOUT_PROTOCOL 2000 //  2000 ms = 2 secondes
#define PROCOTOL_VERSION 1


// MessageType
#define FRAME_ACK           0xFF
#define FRAME_NACK          0xFE


#ifdef __cplusplus
extern "C" {
#endif

// Fonctions exportées
char MspSend(  unsigned char *Buffer, int Len, unsigned int NbTry);
char MspSendWithReply(  unsigned char *BufferOut, int LenOut,  unsigned char *BufferIn , int * LenIn, unsigned int NbTry);
int MspRecv( unsigned char * Buffer, int* Len);
int ReceiveFrame( pFrame NewFrame,  unsigned char * Buffer, unsigned int* Len);
char MspSendAck( unsigned char Type);
bool MspSendWithoutAck(unsigned char *Buffer, int Len);
#ifdef __cplusplus
}
#endif
