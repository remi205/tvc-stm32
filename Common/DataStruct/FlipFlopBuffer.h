#pragma once

class FlipFlopBuffer
{
  // 8 K
  char * Buffer; 
  int m_Page;

  int m_FullSize;
  int m_Size;

  HANDLE m_EventDemiPlein;

 public:
  FlipFlopBuffer();
  ~FlipFlopBuffer();

  bool Destroy();


  HANDLE GetEvent();

  bool Init( int BufferSize );

  char * GetBuffer();
};

