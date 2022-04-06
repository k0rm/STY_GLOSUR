#include "parseint.h"
#include <stdio.h>

/*
 * Returns the value of c or -1 on error
 */
int parseDecimalChar(char c)
{
    (void)c;
    printf("%c\n", c);
    return 0;
}

/*
 * Parses a non-negative integer, interpreted as octal when starting with 0,
 * decimal otherwise. Returns -1 on error.
 */
int parseInt(char *string)
{
    (void)string;
    printf("%s\n", string);

    return 0;
}
