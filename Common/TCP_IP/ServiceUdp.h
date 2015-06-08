//
// Rémi Prud'homme - 2005
//

#pragma once


#include "UDPServer.h"
#include "ParameterParser.h"

#define MAX_SIZE_COMMAND_IN 256

//
// Classe Abstraite
//
class ServiceUdp 
{

  //
  // Variables membres
  //
  bool m_Shutdown; 

protected:
  // Le client de service est la console d'adminsitration
  UDPServer m_Connexion;

  unsigned short m_Port;


  //
  // Le parser sert aussi  de stockage de la commande courante
  //
  ParameterParser m_Parser;

  //
  // Error code from Socket Lib
  //
  DWORD m_Err;
  sys_thread_t   m_hThreadListen;
  sys_sem_t      m_hEventClose;
public:
  ServiceUdp();
  virtual ~ServiceUdp();

  //
  // Procedures intervenant dans l'arret du service
  //
  void Shutdown();

  //
  // Destruction deu thread et fermeture du socket
  //
  bool DestroyService();

  //
  // Procedure d'ouverture du service
  // permet de renvoyer un bool de bonne ouverture du service
  //
  bool OpenService( unsigned short Port);

  friend void ThreadListenUdp(LPVOID Parametre);

  inline unsigned long GetLastError() { return m_Err;};

  virtual bool Analyse() = 0;

  int ReadLine( char *Buffer, unsigned int Len );
};
