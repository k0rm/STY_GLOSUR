#include "persistence.h"
#include <stdlib.h>
#include <stdio.h>

void make_persistent(struct tm **time)
{
    (void) time;
    struct tm *new;

    new = malloc(sizeof(struct tm));

    *new = **time;
    *time = new;
}

void free_persistent(struct tm **time)
{
    (void) time;
    free(*time);
    *time = NULL;
}