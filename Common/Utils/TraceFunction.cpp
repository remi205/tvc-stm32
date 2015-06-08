//
//  
// Rémi Prud'homme, 2002-2004
//

// TraceFunction.cpp : Defines two classes for the debug trace
//
#include "stdafx.h"

#include "TraceFunction.h"

#ifdef WIN32
#include "RegKey.h"
#endif


#include <stdarg.h>

DebugOutputTrace StandartDebugOutput;

/////////////////////////////////////////////////////////////////////////
//  Function : DebugOutputTrace
//
//  IN   :   
//          
//  OUT  : 
//  RET  : 
//
//  Notes : Lit dans les registes le niveau courant de trace
//
/////////////////////////////////////////////////////////////////////////
DebugOutputTrace::DebugOutputTrace()
{
  m_UseNet = true;
}


/////////////////////////////////////////////////////////////////////////
//  Function :  ~DebugOutputTrace
//
//  IN   :   
//          
//  OUT  : 
//  RET  : 
//
//  Notes : Lit dans les registes le niveau courant de trace
//
/////////////////////////////////////////////////////////////////////////
DebugOutputTrace::~DebugOutputTrace()
{

#ifdef WIN32
  // sauvegarde du niveau de trace
  if ( m_UseNet )
    WriteRegKeyInt(_T("TraceLevel") ,m_Level , _T("Global Parameters"));
#endif
}

/////////////////////////////////////////////////////////////////////////
//  Function : SetProcessLabel
//
//  IN   :  ProcessLabel : le nouveau label pour ce process
//          Mes : le message à imprimer
//  OUT  :  
//  RET  : 
//
//  Notes : si le niveau de trace est plus grand que le niveau courant
//          on sort une trace
/////////////////////////////////////////////////////////////////////////

void DebugOutputTrace::SetProcessLabel(char * ProcessLabel, char * Hostname  ,UdpClient & Console)
{
  strcpy(m_ProcessLabel, ProcessLabel);

#ifdef WIN32
  //
  // Chargement du niveau de trace a partir des registres
  //
  LoadParametersInt(_T("TraceLevel"), m_Level, 3, _T("Global Parameters"));
  LoadParametersBool(_T("ModeExclusif"), m_ModeExclusif, false, _T("Global Parameters"));
  LoadParametersBool(_T("UseUdpConsole"), m_UseNet , false, _T("Global Parameters"));
#else
  m_Level = 4;
  m_UseNet = true;

#endif 

  m_Console = &Console;

  // Identification du host name significatif "" ou NULL ne sont pas significatifs
  if ( Hostname != NULL && strlen(Hostname ) > 0)
    {
      strcpy( m_Hostname , Hostname);
      strcat(m_Hostname, ":");
    }

}


/////////////////////////////////////////////////////////////////////////
//  Function : SetLevelTrace
//
//  IN   :  NewLevel : le niveau de trace demandé
//         
//  OUT  :  
//  RET  :  old level
//
//  Notes : Modifie le niveau de trace
//
/////////////////////////////////////////////////////////////////////////
DWORD DebugOutputTrace::SetLevelTrace( int NewLevel )
{
  DWORD old;

  old = m_Level;
  m_Level = NewLevel;
  return old;
}


/////////////////////////////////////////////////////////////////////////
//  Function : OutputDebug
//
//  IN   :  Level : le niveau de trace demandé
//          Mes : le message à imprimer
//  OUT  :  
//  RET  : 
//
//  Notes : si le niveau de trace est plus grand que le niveau courant
//          on sort une trace
/////////////////////////////////////////////////////////////////////////
void DebugOutputTrace::OutputDebug( unsigned int Level, char * FormatString, ... ) 
{
  va_list vl;
  va_start(vl, FormatString);

  bool DoAction = false;

  if ( m_ModeExclusif )
    DoAction = Level== m_Level;
  else
   DoAction = Level <= m_Level;
    
  if ( DoAction )
    {
      char StringBuffer[250];
      char StringFormat[250];

      sprintf(StringFormat,"%s : ", m_ProcessLabel);
      strcat( StringFormat, FormatString);
      //strcat( StringFormat, "\n");

      vsprintf(StringBuffer, StringFormat, vl);

      if ( m_UseNet)
      OutputDebugN(StringBuffer);
    }
}

/////////////////////////////////////////////////////////////////////////
//  Function : OutputDebugN
//
//  IN   :  La chaine de formatage à la printf 
//              la liste de paramètre
//  OUT  : 
//  RET  : 
//
//  Notes : Sort une trace sur la console ip. Version ANSI
//
/////////////////////////////////////////////////////////////////////////
void DebugOutputTrace::OutputDebugN( char * S) 
  {
    char Mes [ 200];

    strcpy( Mes, m_Hostname);
    strcat( Mes, S);
    size_t len = strlen (Mes);

    m_Console->SendString( ( unsigned char *)Mes, (unsigned short )len);
  }


/////////////////////////////////////////////////////////////////////////
//  Function : TraceEventSignal
//
//  IN   :  EventName : le nom de l'event à trace
//          FormatString : la chaine de formatage à la printf
//  OUT  :  
//  RET  : 
//
//  Notes : si le niveau de trace est plus grand que le niveau courant
//          on sort une trace pour l'event donné en paramètre
/////////////////////////////////////////////////////////////////////////
void  DebugOutputTrace::TraceEventSignal( char * EventName ,  char * FormatString, ... ) 
{
  va_list vl;
  va_start(vl, FormatString);

  if ( LEVEL_ALGORITHME <= m_Level)
    {
      char NewStringFormat[250];

      sprintf(NewStringFormat,"%s ! Signal ", EventName);
      strcat( NewStringFormat, FormatString);
  
      OutputDebug(LEVEL_ALGORITHME, NewStringFormat, vl );
    }

}

/////////////////////////////////////////////////////////////////////////
//  Function : TraceEventPulse
//
//  IN   :  EventName : le nom de l'event à trace
//          FormatString : la chaine de formatage à la printf
//  OUT  :  
//  RET  : 
//
//  Notes : si le niveau de trace est plus grand que le niveau courant
//          on sort une trace pour l'event donné en paramètre
/////////////////////////////////////////////////////////////////////////
void  DebugOutputTrace::TraceEventPulse( char * EventName ,  char * FormatString, ... ) 
{
  if ( LEVEL_ALGORITHME <= m_Level)
    {
      char NewStringFormat[250];
      va_list vl;
      va_start(vl, FormatString);


      sprintf(NewStringFormat,"%s ! Pulse ", EventName);
      strcat( NewStringFormat, FormatString);
  
      OutputDebug(LEVEL_ALGORITHME, NewStringFormat, vl );
    }
}


/////////////////////////////////////////////////////////////////////////
//  Function : TraceEventWait
//
//  IN   :  EventName : le nom de l'event à trace
//          FormatString : la chaine de formatage à la printf
//  OUT  :  
//  RET  : 
//
//  Notes : si le niveau de trace est plus grand que le niveau courant
//          on sort une trace pour l'event donné en paramètre
/////////////////////////////////////////////////////////////////////////
void  DebugOutputTrace::TraceEventWait( char * EventName ,  char * FormatString, ... )
{
  if ( LEVEL_ALGORITHME <= m_Level)
    {
      char NewStringFormat[250];
      va_list vl;
      va_start(vl, FormatString);

      sprintf(NewStringFormat,"%s ! Wait ", EventName);
      strcat( NewStringFormat, FormatString);
  
      OutputDebug(LEVEL_ALGORITHME, NewStringFormat, vl );
    }
}


/////////////////////////////////////////////////////////////////////////
//  Function : TraceEventReset
//
//  IN   :  EventName : le nom de l'event à trace
//          FormatString : la chaine de formatage à la printf
//  OUT  :  
//  RET  : 
//
//  Notes : si le niveau de trace est plus grand que le niveau courant
//          on sort une trace pour l'event donné en paramètre
/////////////////////////////////////////////////////////////////////////
void  DebugOutputTrace::TraceEventReset( char * EventName ,  char * FormatString, ... ) 
{
  if ( LEVEL_ALGORITHME <= m_Level)
    {
      char NewStringFormat[250];
      va_list vl;
      va_start(vl, FormatString);

      sprintf(NewStringFormat,"%s ! Reset ", EventName);
      strcat( NewStringFormat, FormatString);

      OutputDebug(LEVEL_ALGORITHME, NewStringFormat, vl );
    }
}


/////////////////////////////////////////////////////////////////////////
//  Function : TraceEventWakeup
//
//  IN   :  EventName : le nom de l'event à trace
//          FormatString : la chaine de formatage à la printf
//  OUT  :  
//  RET  : 
//
//  Notes : si le niveau de trace est plus grand que le niveau courant
//          on sort une trace pour l'event donné en paramètre
/////////////////////////////////////////////////////////////////////////
void  DebugOutputTrace::TraceEventWakeup( char * EventName ,  char * FormatString, ... )
{
  if ( LEVEL_ALGORITHME <= m_Level)
    {
      va_list vl;
      va_start(vl, FormatString);

      char NewStringFormat[250];

      sprintf(NewStringFormat,"%s ! Wakeup ", EventName);
      strcat( NewStringFormat, FormatString);

      OutputDebug(LEVEL_ALGORITHME, NewStringFormat, vl );
    }
}

unsigned int IndentLevel = 0;

//          on sort une trace pour l'event donné en paramètre

/////////////////////////////////////////////////////////////////////////
//  Function :TraceFunction 
//
//  IN   : FunctionName le nom de la fonction à tracer  
//          
//  OUT  : 
//  RET  : 
//
//  Notes : Socke le nom de la fonction et sa trace d'entrée
//
/////////////////////////////////////////////////////////////////////////
TraceFunction::TraceFunction(char * FunctionName)
{
  m_FunctionName = FunctionName;
  IndentLevel += 2;


  //
  // Construction d'une chaine de blanc pour l'indentation
  //
  char Bl[50];

  unsigned int i;

  for (  i = 0; i < IndentLevel; i++)
    Bl[i] =  ' ';
  Bl[i] = 0;


  StandartDebugOutput.OutputDebug(LEVEL_FUNCTION , (char*)"%s%s +", Bl, m_FunctionName);
}

/////////////////////////////////////////////////////////////////////////
//  Function : :~TraceFunction
//
//  IN   :   
//          
//  OUT  : 
//  RET  : 
//
//  Notes : Imprime Fonction exit.
//
/////////////////////////////////////////////////////////////////////////
TraceFunction::~TraceFunction()
{

  //
  // Construction d'une chaine de blanc pour l'indentation
  //
  char Bl[50];

  unsigned int i;
  for ( i = 0; i < IndentLevel; i++)
    Bl[i] =  ' ';

  Bl[i] = 0;


  StandartDebugOutput.OutputDebug(LEVEL_FUNCTION , (char*)"%s%s -", Bl, m_FunctionName);
  IndentLevel -= 2;
}

