//
// Rémi Prud'homme - 2002
//
#pragma once

#include "UDPClient.h"


#define TRACE_FUNCTION(f)  TraceFunction t((char*)f)

#define LEVEL_RUN 0
#define LEVEL_RESSOURCE 1
#define LEVEL_RUNTIME  2
#define LEVEL_ALGORITHME 3
#define LEVEL_FUNCTION 4
#define LEVEL_PARAMETER 5
#define LEVEL_FUNCTION_INNER 6
#define LEVEL_ALL 7

class UdpClient;

class DebugOutputTrace
  {
    char m_ProcessLabel[50];
    char m_Hostname[40];
    DWORD m_Level;
    bool m_ModeExclusif;

    //
    // Pour la console réseau
    //    
    UdpClient  * m_Console;

    bool m_UseNet;

  public :
    DebugOutputTrace();
    ~DebugOutputTrace();

    void SetProcessLabel(char * ProcessLabel, char * Hostname , UdpClient &Console);
    DWORD SetLevelTrace( int NewLevel );
    void SetUseNet ( bool New ) { m_UseNet = New;};

    void OutputDebug( unsigned int Level, char * FormatString, ... ) ;
	  void OutputDebugN( char * S);

    void TraceEventSignal( char * EventName ,  char * FormatString, ... ) ;
    void TraceEventPulse( char * EventName ,  char * FormatString, ... ) ;
    void TraceEventWait( char * EventName ,  char * FormatString, ... ) ;
    void TraceEventReset( char * EventName ,  char * FormatString, ... ) ;
    void TraceEventWakeup( char * EventName ,  char * FormatString, ... ) ;
};


extern DebugOutputTrace StandartDebugOutput;

class TraceFunction  
{
  //
  // Storage for the function to trace
  //
  char * m_FunctionName;
  
public :
  TraceFunction(char * FunctionName);
  ~TraceFunction();
};
