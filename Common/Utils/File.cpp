//
// Rémi Prud'homme, 2005
//
// Utilisatisable en Unicode

#include "stdafx.h"


#include "File.h"
#include "TraceFunction.h"


/////////////////////////////////////////////////////////////////////////
//  Function : File
//
//  IN   : 
//          
//  OUT  : 
//  RET  : 
//
//  Notes : Constructeur
//
/////////////////////////////////////////////////////////////////////////
File::File( TCHAR * Directory )
{
  m_File = INVALID_HANDLE_VALUE;

  if ( strlen ( Directory) < PATHNAME_LEN)
    strcpy( m_Directory, Directory);

  m_Filename[0] = 0;
}


/////////////////////////////////////////////////////////////////////////
//  Function : ~File
//
//  IN   : 
//          
//  OUT  : 
//  RET  : 
//
//  Notes : Creation du fichier en ecriture
//
/////////////////////////////////////////////////////////////////////////
File::~File()
{
  Close();
}

/////////////////////////////////////////////////////////////////////////
//  Function : Create
//
//  IN   : 
//          
//  OUT  : 
//  RET  : 
//
//  Notes : Creation du fichier en ecriture
//
/////////////////////////////////////////////////////////////////////////
bool File::Create( char * Filename , DWORD Param)
{
  TRACE_FUNCTION(_T("File::Create"));

  // Code à bétonner pour ne pas exploser la pile  
  TCHAR s[PATHNAME_LEN];
  _tcscpy( s, m_Directory);
  _tcscat( s, Filename);

  m_File = ::CreateFile( s,  
                         GENERIC_WRITE | GENERIC_READ,
                         FILE_SHARE_WRITE | FILE_SHARE_READ,
                         NULL,
                         CREATE_ALWAYS,
                         FILE_ATTRIBUTE_NORMAL | Param,
                         NULL);

  if ( m_File == INVALID_HANDLE_VALUE)
    {
      // impression d'une trace
      StandartDebugOutput.OutputDebug(LEVEL_RUNTIME, "Impossible de créer le fichier %s", s);
    }
  else
    StandartDebugOutput.OutputDebug(LEVEL_RUNTIME, "Creation du %s", s);

  return m_File != INVALID_HANDLE_VALUE;

}

/////////////////////////////////////////////////////////////////////////
//  Function : Open
//
//  IN   : 
//          
//  OUT  : 
//  RET  : 
//
//  Notes : Ouvre le fichier existant en lecture
//
/////////////////////////////////////////////////////////////////////////
bool File::Open( char * Filename,  DWORD Param)
{
  TRACE_FUNCTION(_T("File::Open"));

  // Code à bétonner pour ne pas exploser la pile  

  _tcscpy( m_Filename, m_Directory);
  _tcscat( m_Filename, Filename);

  m_File = ::CreateFile( m_Filename,  
                       GENERIC_READ,
                       FILE_SHARE_WRITE | FILE_SHARE_READ,
                       NULL,
                       OPEN_EXISTING,
                       FILE_ATTRIBUTE_NORMAL | Param,
                       NULL);

  if ( m_File == INVALID_HANDLE_VALUE)
    {
      // impression d'une trace
      StandartDebugOutput.OutputDebug(LEVEL_RUNTIME, "Impossible d'ouvrir le fichier %s",Filename );
    }

  return m_File != INVALID_HANDLE_VALUE;

}


/////////////////////////////////////////////////////////////////////////
//  Function : Remane
//
//  IN   : 
//          
//  OUT  : 
//  RET  : 
//
//  Notes : 
//
/////////////////////////////////////////////////////////////////////////
bool File::Rename( char * NewName, char * Current)
{
  BOOL ret = FALSE;
  TRACE_FUNCTION(_T("File::Rename"));

  TCHAR NewFullPath[200];
  TCHAR CurrentFullPath[200];

  _tcscpy( NewFullPath, m_Directory);
  _tcscat( NewFullPath, NewName );
  
  _tcscpy( CurrentFullPath, m_Directory);
  _tcscat( CurrentFullPath, Current );

  ret =  ::MoveFile(NewFullPath, CurrentFullPath );

  StandartDebugOutput.OutputDebug(LEVEL_RUNTIME, "Rename new file with :%s => %s", m_Filename, NewFullPath);
  return ret != FALSE;
}

/////////////////////////////////////////////////////////////////////////
//  Function : Read
//
//  IN   : 
//          
//  OUT  : 
//  RET  : 
//
//  Notes : 
//
/////////////////////////////////////////////////////////////////////////
bool File::Read( char * Buffer , unsigned long ByteToRead , LPDWORD ByteReadded)
{
  TRACE_FUNCTION(_T("File::Read"));

  return ::ReadFile( m_File, Buffer, ByteToRead, ByteReadded, NULL) != 0;
}

/////////////////////////////////////////////////////////////////////////
//  Function : Write
//
//  IN   : 
//          
//  OUT  : 
//  RET  : 
//
//  Notes : 
//
/////////////////////////////////////////////////////////////////////////
bool File::Write( char * Buffer, unsigned long ByteToWrite,  LPDWORD ByteWritten)
{
  TRACE_FUNCTION(_T("File::Write"));

  return ::WriteFile( m_File, Buffer, ByteToWrite, ByteWritten, NULL) != 0;
}

/////////////////////////////////////////////////////////////////////////
//  Function : GetFileSize
//
//  IN   : 
//          
//  OUT  :  FileSize
//  RET  :  true si OK, false dans l'autre cas
//
//  Notes : retourne la taille du fichier ( doit être ouvert )
//
/////////////////////////////////////////////////////////////////////////
bool File::FileSize( DWORD & FileSize)
{
  TRACE_FUNCTION(_T("File::GetFileSize"));

  return ::GetFileSize(m_File, &FileSize ) != 0;
}


/////////////////////////////////////////////////////////////////////////
//  Function : Delete
//
//  IN   : 
//          
//  OUT  :  FileSize
//  RET  :  true si OK, false dans l'autre cas
//
//  Notes : retourne la taille du fichier ( doit être ouvert )
//
/////////////////////////////////////////////////////////////////////////
bool File::Delete( char * Filename)
{
  TRACE_FUNCTION(_T("File::Delete"));

  TCHAR NewFullPath[200];

  _tcscpy( NewFullPath, m_Directory);
  _tcscat( NewFullPath, Filename );

  return ::DeleteFile( NewFullPath) != 0;
}
/////////////////////////////////////////////////////////////////////////
//  Function : Close
//
//  IN   : 
//          
//  OUT  :  
//  RET  :  true si OK, false dans l'autre cas
//
//  Notes : ferme le handle
//
/////////////////////////////////////////////////////////////////////////
bool File::Close()
{
  if ( m_File != INVALID_HANDLE_VALUE )
    return ::CloseHandle(m_File) != 0;
  else
    return false;
}
