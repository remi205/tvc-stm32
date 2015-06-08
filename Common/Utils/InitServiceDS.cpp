
#include "stdafx.h"
#include "TraceFunction.h"
#include "ServiceClient.h"
#include "UDPClient.h"


extern DebugOutputTrace StandartDebugOutput;

UdpClient Console;


/////////////////////////////////////////////////////////////////////////
//
//  IN   : InitServiceDS
//          
//  OUT  : 
//  RET  : 
//
//  Notes : Fonction qui fait les initialisation qu'un service doit faire
//
/////////////////////////////////////////////////////////////////////////

bool InitServiceDS(  char * ServiceName , char * ProcessName )
{
  //
  // Initialisation du representant de la console.
  //
  ServiceClient nsproxy;

  unsigned short Port;
  char Hostname[80];
  nsproxy.GetHost((char*)"ConsoleService", &Hostname[0], &Port);
  //
  printf("ConsoleService at %s, %d\n", Hostname, Port);

  Console.Open( Port);
  Console.Resolve(Hostname);

  // obtention du hostname pour identifier la machine qui envoi la trace
  char host[40];
//  gethostname( host, 40);

  // maintenant on peut charge les registres.
  StandartDebugOutput.SetProcessLabel(ProcessName , host, Console);
  StandartDebugOutput.SetLevelTrace(2);

  // 
  // initialisation du Service UDP de meme port que pour le service TCP pour la fonctionn dispo
  //

  // Port = nsproxy.GetPort(ServiceName);
  printf("AdministrativeService\n");
  // service disp pour avoir la fonction dispo
  bool ret = true;

  // send a "service-info" command to administrative service
  nsproxy.GetHost((char*)"AdministrativeService" , &Hostname[0], &Port);

  printf("AdministrativeService  at %s, %d\n", Hostname, Port);

  UdpClient adm;

  adm.Open( Port);
  adm.Resolve( Hostname);

  char Info[120];
  char Version[120];

  sprintf( Info, "service-info|%s|%d|%s", ServiceName, 0, "no-version");
  adm.SendString( (unsigned char *)Info, (unsigned short)strlen(Info));

  adm.Close();
  return ret;
}



/////////////////////////////////////////////////////////////////////////
//
//  IN   : CloseDS
//          
//  OUT  : 
//  RET  : 
//
//  Notes : 
//
/////////////////////////////////////////////////////////////////////////
void CloseDS()
{
  //  DsDispo.DestroyService();
  Console.Close();
}
