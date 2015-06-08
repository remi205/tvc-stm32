#pragma once


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
#endif  /* !BASETYPES */


#ifndef _ULONGLONG_
typedef long long int LONGLONG;
typedef unsigned long long int ULONGLONG;
typedef LONGLONG *PLONGLONG;
typedef ULONGLONG *PULONGLONG;
#endif // _ULONGLONG_

#define TRUE 1
#define FALSE 0

#define false 0
#define true  1

