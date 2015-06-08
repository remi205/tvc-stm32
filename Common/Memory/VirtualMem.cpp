//
// Rémi Prud'homme - 2005
//
#include "stdafx.h"
#include "VirtualMem.h"
#include "TraceFunction.h"

extern DebugOutputTrace StandartDebugOutput;


////////////////////////////////////////////////////////////////////////
//  Function : VirtualMem
//
//  IN   :   
//          
//  OUT  : 
//  RET  : 
//
//  Notes : 
//
////////////////////////////////////////////////////////////////////////
VirtualMem::VirtualMem ()
  {
    m_pBuffer = NULL;
    m_Size = 0;
  }

////////////////////////////////////////////////////////////////////////
//  Function : ~VirtualMem
//
//  IN   :   
//          
//  OUT  : 
//  RET  : 
//
//  Notes : 
//
////////////////////////////////////////////////////////////////////////
VirtualMem::~VirtualMem()
  {
    Free();
  }

////////////////////////////////////////////////////////////////////////
//  Function : Alloc
//
//  IN   :   Length, la taille du bloc de mémoire demandé
//          
//  OUT  : 
//  RET  : 
//
//  Notes : Alloue un bloc memoire de la taille de Lenght
//
////////////////////////////////////////////////////////////////////////
void * VirtualMem::Alloc( DWORD Length )
{
  TRACE_FUNCTION(_T("VirtualMem::Alloc"));
  //
  // Allocation d'un buffer pour la lecture du tas
  //
  m_pBuffer  = malloc( Lenght );
  if ( m_pBuffer == NULL )
    StandartDebugOutput.OutputDebug(LEVEL_RESSOURCE, "VirtualMem::Alloc error %d", GetLastError());      

   
  return m_pBuffer;
}

////////////////////////////////////////////////////////////////////////
//  Function : Dump
//
//  IN   :   
//          
//  OUT  : 
//  RET  : 
//
//  Notes : 
//
////////////////////////////////////////////////////////////////////////
void VirtualMem::Dump( DWORD Offset, DWORD Len )
{
  char * Buffer = ( char *)m_pBuffer;

  if ( Len > 0 )
     {
       for ( DWORD i = 0; i < Len ; i += 16 )
         {
         StandartDebugOutput.OutputDebug(LEVEL_RUNTIME , "0x%04x : 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x   0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x 0x%02x",
                                         i,  Buffer[i], Buffer[i+1],Buffer[i+2],Buffer[i+3],Buffer[i+4],Buffer[i+5],Buffer[i+6],Buffer[i+7], 
                                         Buffer[i+8], Buffer[i+9],Buffer[i+10],Buffer[i+11],Buffer[i+12],Buffer[i+13],Buffer[i+14],Buffer[i+15]);

        }
     }
  }


////////////////////////////////////////////////////////////////////////
//  Function : Free
//
//  IN   :   
//          
//  OUT  : 
//  RET  : 
//
//  Notes : Lire la mémoire virtuelle alloué lors de l'appel d'Alloc
//
////////////////////////////////////////////////////////////////////////
bool VirtualMem::Free()
{
  TRACE_FUNCTION(_T("VirtualMem::Free"));
  bool ret  = false;

  //
  // Libération de la mémoire
  //
  if ( m_pBuffer )
    {
    ret  = ::free(m_pBuffer) != FALSE;
    m_pBuffer = NULL;
    }

  if ( ! ret)
    StandartDebugOutput.OutputDebug(LEVEL_RESSOURCE, "VirtualMem::Free error %d", GetLastError());      
  return ret;
}
