//
// FractalConcept - 2002-2004
// Rémi Prud'homme, Marc Battyani
//

#include "HashTable.h"

template<class T> class HashTableMutex : public HashTable<T>
{
  HANDLE m_hMutex;
public :
 
  HashTableMutex()
  {
    m_hMutex = NULL;
  };

  ~HashTableMutex()
  {
    if( m_hMutex)
      ::CloseHandle(m_hMutex);
  };

  bool InitHashTable(int Size)
  {
    ::WaitForSingleObject(m_hMutex , INFINITE );
    HashTableMutex<T>::InitHashTable( Size);
    ::ReleaseMutex(m_hMutex);
  };

  int Insert (  unsigned long Key, T * Body )
  {
    ::WaitForSingleObject(m_hMutex , INFINITE );
    HashTableMutex<T>::Insert( Key,Body );
    ::ReleaseMutex(m_hMutex);
  };

  void  SuppressHash( unsigned long Key )
  {
    ::WaitForSingleObject(m_hMutex, INFINITE );
    HashTableMutex<T>::SuppressHash( key );
    ::ReleaseMutex(m_hMutex);
  };
};
