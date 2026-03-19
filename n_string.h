#include <string.h>
#include <stdio.h>

#ifndef N_STRING_H
#define N_STRING_H

#ifndef size
    typedef size_t size;
#endif
#define strfocc strchr
#define strlocc strrchr
#define strfspn strpbrk
#define strfsub strstr
#define memfocc memchr
#ifndef char16
    typedef char char16[17];
#endif
#ifndef char32
    typedef char char32[33];
#endif
#ifndef char64
    typedef char char64[65];
#endif
#ifndef wchar
    typedef wchar_t wchar;
#endif
#ifndef wchar16
    typedef wchar_t wchar16[17];
#endif
#ifndef wchar32
    typedef wchar_t wchar32[33];
#endif
#ifndef wchar64
    typedef wchar_t wchar64[65];
#endif
int strequ(char* s1, char * s2) { return (strcmp(s1, s2) == 0 ? 1 : 0); }

#endif