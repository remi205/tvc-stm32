//
// TVC Lisp - 2014
// Rémi Prud'homme, 
//
#pragma once

class  FifoBuffer {
   unsigned char * m_Buffer;

  // m_Mutex;
   unsigned long m_ReadPointer;
   unsigned long m_WritePointer;
   unsigned long m_FifoCount;
   unsigned long m_Size;

public:
  
  FifoBuffer( unsigned long   Size );
  //~FifoBuffer();
  bool ReadBuffer( unsigned char * Buffer,  unsigned long  ReadSize);
  bool WriteBuffer( unsigned char * Buffer, unsigned long  WriteSize);
  void PurgeBuffer();
  unsigned long GetCount() { return m_FifoCount;};
};

