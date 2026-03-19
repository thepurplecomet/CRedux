#include <wchar.h>

#ifndef N_WCHAR_H
#define N_WCHAR_H

#ifndef wchar
    #define wchar wchar_t
#endif
#ifndef wint
    #define wint wint_t
    #endif
#define wcsfocc wcschr
#define wcslocc wcsrchr
#define wcsfspn wcspbrk
#define wcsfsub wcsstr

#endif