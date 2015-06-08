//
// Rémi Prud'homme - 2005
//

#pragma once


class VirtualMem 
{
  DWORD m_Size;
  void  * m_pBuffer;
public:
  VirtualMem ();
  ~VirtualMem();

  void * Alloc( DWORD Size );
  void Dump( DWORD Offset, DWORD Len );
  bool Free();

  inline void * GetBase() { return m_pBuffer;};
};
