// 
//  Rémi Prud'homme - 2000
//

//
// Module de Service pour application authorisant un 
// un control distant par reseau TCP
//
#pragma once

#include "arch/sys_arch.h"
#include "TCPServer.h"
#include "ParameterParser.h"


#define MAX_SIZE_COMMAND_IN 256

class CService
{

public : 

  //
  // Constructeurs / Destructeur
  //
  CService(unsigned short NumPort,bool KeepAlive, char * sep = (char*)"|", unsigned char EndChar = '\n' );
  virtual ~CService();

  //
  // Procedures intervenant dans l'arret du service
  //
  void Shutdown();

  //
  //
  //
  bool DestroyService();

  //
  // Procedure d'ouverture du service
  // permet de renvoyer un bool de bonne ouverture du service
  //
  bool OpenService();

  //
  // Fonction de reprise de l'activite du service apres un DestroyService
  //
  bool ResumeService() ;

  //
  // C'est le thread qui va assurer le control de m_Connexion
  //
  friend void ThreadListen(LPVOID Parametre);

  inline DWORD GetLastError() { return m_Err;};

  bool PreAnalyse();

  bool WaitForClose();


  char * GetVersion();

  TcpServeurSimple m_Connexion;

  void SetPort(unsigned short NumPort){
    m_Connexion.SetPort(NumPort);
  };


protected : 
  // Analyse et execute la commande envoyee par le client
  // Cette procedure est virtuelle parce qu'elle depend etroitement 
  // de l'application concideree.
  virtual bool Analyse() = 0;

  //
  // Variables membres
  //
  bool m_Shutdown; 


  sys_thread_t   m_hThreadListen;
  sys_sem_t      m_hEventClose;


 
  //
  // Le parser sert aussi  de stockage de la commande courante
  //
  ParameterParser m_Parser;
  
  //
  // indique si on travail en mode session ou en mode requete
  //
  bool m_KeepAlive;

  //
  // Error code from Socket Lib
  //
  DWORD m_Err;

  //
  // Pour controle le process des commandes
  //
  bool m_ProcessCommand;

  //
  // une taille suffisante
  //
  char m_Version[30];
};
