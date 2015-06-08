//
// FractalConcept - 2002-2004
// Rémi Prud'homme, Marc Battyani
//


#pragma once

struct FifoBuffer {
  void * m_Buffer;

  HANDLE m_Mutex;
  DWORD m_ReadPointer;
  DWORD m_WritePointer;
  DWORD m_FifoCount;
  DWORD m_Size;

};

DWORD
InitializeFifoBuffer(
                     struct FifoBuffer * Fifo,
                     ULONG Size
                     );

void
DestroyFifoBuffer(struct FifoBuffer *Fifo);

bool ReadFifoBuffer( struct FifoBuffer * Fifo,
                 VOID  * Buffer,
                 ULONG ReadSize
			);


bool  WriteFifoBuffer(
                  struct FifoBuffer *Fifo,
                  VOID  * Buffer,
                  ULONG WriteSize
                  );

void
PurgeFifoBuffer( struct FifoBuffer *Fifo);
