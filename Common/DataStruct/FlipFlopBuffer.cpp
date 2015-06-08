 


#include "FlipFlopBuffer.h"

FlipFlopBuffer::FlipFlopBuffer()
{
  m_EventDemiPlein = NULL;
  m_Buffer = 0;
}

FlipFlopBuffer::~FlipFlopBuffer()
{
  ::CloseHandle(m_EventDemiPlein);
}

bool FlipFlopBuffer::Destroy()
{
  if ( m_EventDemiPlein )
    ::CloseHandle(m_EventDemiPlein);
  
  if ( m_Buffer )
    ::VirtualFree(m_Buffer, m_FullSize, MEM_DECOMMIT );
}

bool FlipFlopBuffer::Init( int Size )
{
  m_EventDemiPlein = ::CreateEvent(NULL, FALSE, FALSE, NULL);
  
  Buffer = ::VirtualAlloc( NULL, Size, MEM_COMMIT, PAGE_READWRITE );
  
  m_FullSize = Size;
  m_Size = Size / 2;
}

char * FlipFlopBuffer::GetBuffer()
{
}

HANDLE  FlipFlopBuffer::GetEvent()
{
}
