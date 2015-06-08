#include <windows.h>
#include "OS/Memory/AllocMsg.h"

#define HIGHLEVELMARK 0.5
#define LOWLEVELMARK  0.2

typedef char bool;
//#define NULL ( void *)0



/////////////////////////////////////////////////////////////////////////
//  Function : PoolManagerInit 
//  IN   :  
//  OUT  :
//  RET  :    
//
//  Notes : Initialise les structures pour la gestion du pool.
//          
//
/////////////////////////////////////////////////////////////////////////
int PoolManagerInit( MsgPoolManager * Pool , int NbMsg, int MsgSize)
{
  int i;
  HeaderMsg * p;
  // Allocation 
  // pool = ( HeaderMsg *) MemAlloc( NbMsg * MsgSize );
  p = ( HeaderMsg *) VirtualAlloc( NULL,
                                   NbMsg * MsgSize,
                                   MEM_COMMIT,
                                   PAGE_READWRITE);
   
  Pool->Buffer = p;
  Pool->BufferSizeAllocation = NbMsg * MsgSize;
                    
  // Allocation des listes ( en array )
  Pool->MsgArray = (  HeaderMsg *) malloc( sizeof(HeaderMsg) * NbMsg);
  Pool->AllocatedArray = (  HeaderMsg **)malloc( sizeof(HeaderMsg *) * NbMsg);

  // Autres variables
  Pool->SizeInMessage = MsgSize;

  //
  // Compteurs d'administation
  //
  Pool->Allocated = 0;
  
  Pool->CongestionOccured = 0;
  Pool->CongestionHighMark = HIGHLEVELMARK * NbMsg ;
  Pool->CongestionLowMark = LOWLEVELMARK * NbMsg ;

  //
  // Construction de la liste de Header libre
  //
  InitializeListHead(&Pool->FreeListHead);
  
  // Initialisatoin des headers de msg et insertion dans la liste 
  // des free.
  for ( i = 0; i < NbMsg ; i++)
    {
      Pool->MsgArray[i].Buffer = p+i;
      Pool->MsgArray[i].Index = i;
      Pool->MsgArray[i].AllocationDate = 0;

      // Initialement il n'y a pas de Header alloue, donc Buffer est nul.
      InsertHeadList(&Pool->FreeListHead, &Pool->MsgArray[i].ListItem);
    }

  for ( i = 0; i < NbMsg ; i++)
    {
      // Initialement il n'y a pas de Header alloue, donc c'est nul.
      Pool->AllocatedArray[i] = NULL;
    }
  return 1;

}

/////////////////////////////////////////////////////////////////////////
//  Function : GetMsg 
//  IN   :  MsgPoolManager * Pool
//  OUT  :
//  RET  :    
//
//  Notes : Alloue un message du pool. Mets à jour les statistiques du
//          pool.
//
///////////////////////////////////////////////////////////////////////// 
HeaderMsg *GetMsg( MsgPoolManager * Pool)
{
  HeaderMsg * hMsg;
  LIST_ENTRY *p;

  // Prise de la tete.
  p = RemoveHeadList(&Pool->FreeListHead);
  if ( p == NULL )
    {
      // ca va mal, plus de message disponible.
      return NULL;
    }
  
  hMsg = CONTAINING_RECORD(p, HeaderMsg,ListItem);

  // Insertion dans la liste des Allocated.
  Pool->AllocatedArray[ hMsg->Index ] = hMsg;


  // Datation du message.
  //  hMsg->AllocationDate = GetDate();

  // Mise à jours des statistiques.
  Pool->Allocated++;
#if 0
  // Détection de la congestion.
  if ( Pool->Allocated == Pool->CongestionHighMark)
    {
       Pool->CongestionOccured++;
       
       // envoi d'une alarme.

    }
#endif
  return hMsg;
}

/////////////////////////////////////////////////////////////////////////
//  Function : PutMsg 
//  IN   :  
//  OUT  :
//  RET  :    
//
//  Notes : Libere un message préalablement alloué dans le pool.
//          
//
/////////////////////////////////////////////////////////////////////////
int PutMsg( MsgPoolManager * Pool, HeaderMsg * hMsg)
{
  // Sortie de la liste Allocated.
  Pool->AllocatedArray[ hMsg->Index ] = NULL;

  // Insertion dans la liste des Free.
  InsertTailList(&Pool->FreeListHead, &hMsg->ListItem);

  // Mise à jour des statistiques.
  Pool->Allocated--;

  if (  Pool->Allocated == Pool->CongestionLowMark)
    {
        // envoi d'une alarme.
    }
  return 1;
}

/////////////////////////////////////////////////////////////////////////
//  Function : DestroyPool 
//  IN   :  
//  OUT  :
//  RET  :    
//
//  Notes :
//          
//
/////////////////////////////////////////////////////////////////////////
void DestroyPool(MsgPoolManager * Pool)
{
  VirtualFree(Pool->Buffer, Pool->BufferSizeAllocation, MEM_DECOMMIT);

  free(Pool->MsgArray);
}


/////////////////////////////////////////////////////////////////////////
//  Function : CheckForOldMessage 
//  IN   :  
//  OUT  :
//  RET  :    
//
//  Notes :
//          
//
/////////////////////////////////////////////////////////////////////////
void CheckForOldMessage()
{
  // Parcours de tous les messages alloués

  // Test de veillesse
  // si trop vieux, les libérer et envoi d'une alarme


}


