//
// Rémi Prud'homme, 2005
//

#pragma once


#define PATHNAME_LEN 200
class File
{
protected:
  HANDLE m_File;

  char m_Directory[PATHNAME_LEN];

  char m_Filename[200];
public :

  File( char * Directory );
  ~File();

  bool Create( char * Filename, DWORD Param = 0);
  bool Open( char * Filename, DWORD Param = 0);
  bool Close();

  bool Read( char * Buffer , DWORD ByteToRead , LPDWORD ByteReadded);
  bool Write( char * Buffer, DWORD ByteToWrite,  LPDWORD ByteWritten);

  bool Rename( char * New, char * Current);
  bool Delete( char * New);

  bool FileSize( DWORD & FileSize);
};


