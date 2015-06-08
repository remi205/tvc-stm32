// RegisterMacros.h
#pragma once

//typedef unsigned long long __int64;

#define WRITE_REGISTER_UCHAR(x, y) {    \
    *(volatile UCHAR * const)(x) = y;   \
}

#define WRITE_REGISTER_USHORT(x, y) {   \
    *(volatile USHORT * const)(x) = y;  \
}

#define WRITE_REGISTER_ULONG(x, y) {    \
    *(volatile ULONG * const)(x) = y;   \
}

#define WRITE_REGISTER_LONG64(x, y) {   \
    *(volatile __int64 * const)(x) = y;  \
}

#define READ_REGISTER_UCHAR(x) \
    (*(volatile UCHAR * const)(x))

#define READ_REGISTER_USHORT(x) \
    (*(volatile USHORT * const)(x))

#define READ_REGISTER_ULONG(x) \
    (*(volatile ULONG * const)(x))

#define READ_REGISTER_LONG64(x) \
    (*(volatile __int64 * const)(x))


