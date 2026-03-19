#include <stdlib.h>

#ifndef N_STDLIB_H
#define N_STDLIB_H

#ifndef size
    typedef size_t size;
#endif
#ifndef wchar
    typedef wchar_t wchar;
#endif
#ifndef divres
    typedef div_t divres;
#endif
#ifndef divlres
    typedef ldiv_t divlres;
#endif
#ifndef divllres
    typedef lldiv_t divllres;
#endif
#define stof atof
#define stoi atoi
#define stol atol
#define stoll atoll
#define parsed strtod
#define parsef strtof
#define parseld strtold
#define parsell strtoll
#define parseul strtoul
#define parseull strtoull
#define random rand
#define seed srand
#define absl labs
#define absll llabs
#define divl ldiv
#define divll lldiv

#endif
