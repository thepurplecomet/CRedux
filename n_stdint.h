#include <stdint.h>

#ifndef N_STDINT_H
#define N_STDINT_H

#ifdef INT8_MAX
    typedef int8_t int8;
#endif
#ifdef INT16_MAX
    typedef int16_t int16;
#endif
#ifdef INT32_MAX
    typedef int32_t int32;
#endif
#ifdef INT64_MAX
    typedef int64_t int64;
#endif
#ifdef UINT8_MAX
    typedef uint8_t uint8;
#endif
#ifdef UINT16_MAX
    typedef uint16_t uint16;
#endif
#ifdef UINT32_MAX
    typedef uint32_t uint32;
#endif
#ifdef UINT64_MAX
    typedef uint64_t uint64;
#endif
#ifdef INT_FAST8_MAX
    typedef int_fast8_t fast8;
#endif
#ifdef INT_FAST16_MAX
    typedef int_fast16_t fast16;
#endif
#ifdef INT_FAST32_MAX
    typedef int_fast32_t fast32;
#endif
#ifdef INT_FAST64_MAX
    typedef int_fast64_t fast64;
#endif
#ifdef UINT_FAST8_MAX
    typedef uint_fast8_t ufast8;
#endif
#ifdef UINT_FAST16_MAX
    typedef uint_fast16_t ufast16;
#endif
#ifdef UINT_FAST32_MAX
    typedef uint_fast32_t ufast32;
#endif
#ifdef UINT_FAST64_MAX
    typedef uint_fast64_t ufast64;
#endif
#ifdef INT_LEAST8_MAX
    typedef int_least8_t least8;
#endif
#ifdef INT_LEAST16_MAX
    typedef int_least16_t least16;
#endif
#ifdef INT_LEAST32_MAX
    typedef int_least32_t least32;
#endif
#ifdef INT_LEAST64_MAX
    typedef int_least64_t least64;
#endif
#ifdef UINT_LEAST8_MAX
    typedef uint_least8_t uleast8;
#endif
#ifdef UINT_LEAST16_MAX
    typedef uint_least16_t uleast16;
#endif
#ifdef UINT_LEAST32_MAX
    typedef uint_least32_t uleast32;
#endif
#ifdef UINT_LEAST64_MAX
    typedef uint_least64_t uleast64;
#endif
#ifdef INTMAX_MAX
    typedef intmax_t intmax;
#endif
#ifdef UINTMAX_MAX
    typedef uintmax_t uintmax;
#endif
#ifdef INTPTR_MAX
    typedef intptr_t intptr;
#endif
#ifdef UINTPTR_MAX
    typedef uintptr_t uintptr;
#endif

#endif