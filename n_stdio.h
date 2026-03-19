#include <stdio.h>
#include <string.h>
#include <stddef.h>

#ifndef N_STDIO_H
#define N_STDIO_H

#define fremove remove
#define frename rename
#define ftmp tmpfile
#define ftmpnam tmpnam
#define print printf
#define fprint fprintf
#define prints snprintf
#define vprint vprintf
#define vfprint vfprintf
#define vprints vsnprintf
#define scan scanf
#define fscan fscanf
#define sscan sscanf
#define vscan vscanf
#define vfscan vfscanf
#define vscans vsscanf
#define fungetc ungetc
#define frewind rewind
#define fclearerr clearerr
#define fsetbuf setvbuf
#define IODBUF BUFSIZ
#define IOFBF _IOFBF
#define IOLBF _IOLBF
#define IONBF _IONBF
#define TMPNAM_MAX L_tmpnam
#ifndef fpos
    typedef fpos_t fpos;
#endif
#ifndef size
    typedef size_t size;
#endif
#ifndef file
    typedef FILE file;
#endif
// Uses fgets to get a line, discard the newline char, then clear the buffer
// Takes a destination string pointer, and a maximum number of chars that
// preceed the null terminator
int getl(char* buffer, size_t max) {
    if (fgets(buffer, max, stdin) == NULL)
        return 0;
    char* last = strrchr(buffer, '\n');
    if (last == NULL) {
        int c;
        while ((c = getchar()) != '\n' && c != '\0' && c != EOF);
    } else *last = '\0';
    return 1;
}

#endif