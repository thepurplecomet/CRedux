# CRedux
A reckless reimagination of the C99 standard library

## Who asked for this?

Well, I did. We love C for its simplicity, but reinventing the wheel can get annoying and time-consuming. In order to keep up with the times while retaining compatibility, C has also adopted odd naming conventions that aren't always consistent, or just look ugly.

## Who's this for?

I recommend this for personal projects only. CRedux is here to make programming in C more intuitive with little sacrafice. If this were included into a large-scale production it could create a few refactoring nightmares, but if that doesn't sound like a problem, go ahead and try it!

## What's changed?

All sorts of things! The primary focus has been renaming functions and datatypes, but I've also been working on expanding the C Standard Library with my own utilities.

### Preview of Function Names

| C99 Function | CRedux Alias | Comment |
| :--- | :--- | :--- |
| printf() | print() | Why do we need the -f? |
| scanf() | scan() | Why do we need the -f? |
| remove() | fremove() | Add the f- prefix to denote a file operation |
| fprintf() | fprint() | Remove the -f suffix, keep the f- prefix since its a file operation |
| vscanf | vscan | The v- prefix denotes its a variadic version |
| strchr() | strfocc() | strchr() is ambiguous, where as strfocc() means "first occurence" |
| strrchr() | strlocc() | strrchr() is ambiguous, where as strlocc() means "last occurence" |
| strstr() | strsub() | strstr() is ambiguos; strfsub() denotes the first occuring substring |

### Preview of Datatype Names

| C99 Datatype | CRedux Typedef | Comment |
| :--- | :--- | :--- |
| int8_t/uint8_t | int8/uint8 | Get rid of the suffix, it's pointless |
| char[17]/char[33]/char[65] | char16/char32/char64 | Small, predictable string types are a sweet addition to C |
| size_t | size | Get rid of the suffix (size is a common word, but I really don't care) |

## Preview of New Functions

| CRedux Function | CRedux Header | Comment |
| :--- | :--- | :--- |
| strequ() | n_string.h | Uses stcmp() to check if strings are equal |
| getl() | n_stdio.h | Simple method to get a line into a buffer from stdin and clear remaining characters |
| slrie()/srrie()/smrie() | n_math.h | Calculate a left-hand/right-hand/midpoint Riemann's sum |
| strp() | n_math.h | Calculate a Riemann's sum using the trapezoid rule |
| ssmp() | n_math.h | Calculate a Riemann's sum using Simpson's rule + trapezoid rule |
