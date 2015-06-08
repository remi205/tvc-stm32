#pragma once

typedef unsigned char BOOLEAN;
typedef void VOID;


#ifndef BASETYPES
#define BASETYPES
typedef unsigned long ULONG, *PULONG;
typedef unsigned short USHORT, * PUSHORT;

typedef char          CHAR;
typedef unsigned char UCHAR;
typedef unsigned char *PUCHAR;
typedef char * PCHAR;
typedef void *PVOID;
typedef unsigned char BOOL;

#ifndef __cplusplus
typedef unsigned char bool;
#endif 

#endif  /* !BASETYPES */


#ifndef _ULONGLONG_
typedef long long int LONGLONG;
typedef unsigned long long int ULONGLONG;
typedef LONGLONG *PLONGLONG;
typedef ULONGLONG *PULONGLONG;
#endif // _ULONGLONG_



typedef unsigned long IOSTATUS;


#define TRUE 1
#define FALSE 0


#define false 0

