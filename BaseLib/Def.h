#ifndef _DEF_H
#define _DEF_H

#include <winnt.h>

typedef char SBYTE;
typedef unsigned char BYTE;
typedef short SWORD;
typedef unsigned short WORD;
typedef long SDWORD;
typedef unsigned long DWORD;
typedef long long SQWORD;
typedef unsigned long long QWORD;
#define pi 3.1415926535897932384626433832795
#define r2d pi/180

#ifndef SERVER_PORT
#define SERVER_PORT 50200
#endif

#define MAX_BUFFER_SIZE 7048

#define MAX_USERNAME_SIZE 12
#define MAX_PASSWORD_SIZE 12
#define MAX_AUTHKEY_SIZE 16
#define MAX_SRVADDR_SIZE 64
#define MAX_CHARSRV_COUNT 10
#define MAX_MAC_ADDR_SIZE 6

#endif