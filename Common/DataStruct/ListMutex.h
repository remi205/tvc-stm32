//
// FractalConcept - 2002-2004
// Rémi Prud'homme, Marc Battyani
//

#pragma once

#include <windows.h>

#include "List.h"


template<class T> class ListMutex : public List<T>
{
  HANDLE m_hMutex;
public :
 
  ListMutex()
  {
    m_hMutex = NULL;
  };

  ~ListMutex()
  {
    if( m_hMutex)
      ::CloseHandle(m_hMutex);
  };

  // A l'appelant d'appeler GetLastError();
  bool Initialise()
  {
    List<T>::Initialise();
    m_hMutex = ::CreateMutex( NULL, FALSE, NULL);
    return m_hMutex == NULL;
  };
  
  void PutTail (  T  * Val)
  {
    ::WaitForSingleObject(m_hMutex, INFINITE );
    List<T>::PutTail( Val);
    ::ReleaseMutex(m_hMutex);
  }
  
  T  *  GetHead ( )
  {
    ::WaitForSingleObject(m_hMutex , INFINITE );
    T * p =   List<T>::GetHead();
    ::ReleaseMutex(m_hMutex);
    return p;
  };
  
  bool DeleteItem( T  * Val)
  {
    ::WaitForSingleObject(m_hMutex , INFINITE );
    bool p = List<T>::DeleteItem( Val);
    ::ReleaseMutex(m_hMutex);
    return p; 
  }

  bool DeleteItem( char * szName)
  {
    ::WaitForSingleObject(m_hMutex , INFINITE );
    bool p = List<T>::DeleteItem( szName);
    ::ReleaseMutex(m_hMutex);
    return p;   
  };
};
