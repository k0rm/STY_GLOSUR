#include "persistence.h"
#include <string.h> /* for memcpy */
#include <stdlib.h> /* for malloc */

void make_persistent(struct tm **time)
{
    struct tm *new;
    if ((time == NULL) || (*time == NULL)) {
        return;
    }

    // Allocate memory for the persistent copy of the struct
    // We do not overwrite *time until we have successfully created a copy.
    // (A solution that always overwrites *time is also acceptable)
    new = malloc(sizeof(struct tm));
    if (new == NULL) {
        return;
    }

    *new = **time;
    *time = new;
}

void free_persistent(struct tm **time)
{
    if ((time == NULL) || (*time == NULL)) {
        return;
    }

    free(*time);
    *time = NULL;
}
