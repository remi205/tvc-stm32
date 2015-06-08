#pragma once

#include "List.h"


typedef struct _HeaderBlock {
  LIST_ENTRY ListItem;
  void * Buffer;
  unsigned int Index;
  unsigned long AllocationDate;
} HeaderBlock;


class PoolManager 
{
  PVOID m_Buffer;
  ULONG m_BufferSizeAllocation;

  // Paramètre du Pool
  int m_SizeInMessage;

  // Compteurs d'administation
  int m_Allocated;
  
  int m_CongestionOccured;
  int m_CongestionHighMark;
  int m_CongestionLowMark;

  // Tableau et liste de gestion
  HeaderBlock * FreeArray;
  HeaderBlock ** AllocatedArray;

  // List<HeaderBlock> m_List;

  LIST_ENTRY FreeListHead;

public :
  PoolManager();
  ~PoolManager();

  int PoolManagerInit( int NbMsg, int MsgSize);
  HeaderBlock *GetBlock( );
  int PutMsg( HeaderBlock * hMsg);
  
  void DestroyPool();
};

