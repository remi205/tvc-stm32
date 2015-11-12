
#include "FifoBuffer.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FifoBuffer::FifoBuffer( unsigned long Size )
  {
    m_WritePointer = 0;
    m_ReadPointer = 0;
    m_FifoCount = 0;
    m_Size = Size;
    m_Buffer = (unsigned char*) malloc(Size);
  }

bool FifoBuffer::ReadBuffer(unsigned char *Buffer, unsigned long ReadSize)
  {
    if ( m_ReadPointer + ReadSize >= m_Size)
      {
        // en 2 fois 
        unsigned int Partial = m_Size - m_ReadPointer;
        memcpy( Buffer, m_Buffer + m_ReadPointer , Partial);

        memcpy( Buffer + Partial, m_Buffer , ReadSize - Partial);
        m_ReadPointer  = ReadSize - Partial;
        }
    else
      {
        memcpy( Buffer, m_Buffer + m_ReadPointer , ReadSize);
        m_ReadPointer += ReadSize;  
      }
    
    m_FifoCount -= ReadSize;
    return true;
  }


bool FifoBuffer::WriteBuffer(unsigned char * Buffer, unsigned long WriteSize)
  {
    if ( m_WritePointer + WriteSize >= m_Size)
      {
        // en 2 fois 
        unsigned int Partial = m_Size - m_WritePointer;
        memcpy( m_Buffer + m_WritePointer,  Buffer,  Partial);
        memcpy( m_Buffer , (unsigned char *)Buffer + Partial, WriteSize - Partial);
        m_WritePointer = WriteSize - Partial;
      }
    else
      {
        memcpy( (unsigned char *)m_Buffer + m_WritePointer, Buffer,  WriteSize);
        m_WritePointer += WriteSize;
      }
    
    m_FifoCount += WriteSize;
    return true;
  }


