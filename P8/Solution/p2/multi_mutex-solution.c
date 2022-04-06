#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <alloca.h>
#include <assert.h>
#include "multi_mutex.h"

int multi_mutex_unlock(pthread_mutex_t **mutexv, int mutexc)
{
    if ((mutexv == NULL) || (mutexc < 0)) {
        return -1;
    }

    // Attempt to unlock all mutexes.
    for (int i = 0; i < mutexc; i++) {
        if (mutexv[i]) {
            // No error handling here.
            pthread_mutex_unlock(mutexv[i]);
        }
    }

    return 0;
}

int multi_mutex_trylock(pthread_mutex_t **mutexv, int mutexc)
{
    if ((mutexv == NULL) || (mutexc < 0)) {
        return -1;
    }

    for (int i = 0; i < mutexc; i++) {
        if (mutexv[i]) {
            int r = pthread_mutex_trylock(mutexv[i]);
            if (r == 0) {
                continue;
            }
        }

        // A lock error occurred.
        // We should unlock the already locked mutexes.
        multi_mutex_unlock(mutexv, i);

        return -1;
    }

    return 0;
}
