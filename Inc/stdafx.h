
#include "lwipopts.h"

#include <ctype.h>

typedef unsigned char BOOL;
typedef void *LPVOID;
typedef unsigned long DWORD;

typedef int HANDLE;

#define FALSE false

#define ERROR_SUCCESS 0
#define INVALID_SOCKET -1
#define SOCKET_ERROR -1

#define ZeroMemory(x,l) memset(x,0,l)

#define _T(str) (char*)str

//#define LWIP_ERR_T
typedef unsigned long LWIP_ERR_T;

typedef unsigned short USHORT;

typedef int SOCKET;


#include "arch/sys_arch.h"
#include "lwip/sys.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lwip/err.h"

#include "lwip/sockets.h"
#include "lwip/dns.h"
