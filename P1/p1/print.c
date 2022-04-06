#include <stdio.h>
#include "print.h"

void print_line(int64_t number, char *string)
{
    (void) number;
    (void) string;

    int len = sizeof(string)/sizeof(int);

    for (int i = 0; i < len; i++) {
        printf("%s", string);
    }
    printf("\n");
    printf("%d\n", number);
}
