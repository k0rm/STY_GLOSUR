#include "run_program.h"

#include <stdlib.h>
#include <stdio.h>

#define ERROR_CODE 127

int run_program(char *file_path, char *argv[])
{
    (void) file_path;
    (void) argv;

    int pid = fork();

    if (pid < 0) {
        perror("FORK FAILED");
        return ERROR_CODE;
    }

    execv(file_path);

    wait(NULL);

    // remember to return ERROR_CODE on error.
    return ERROR_CODE;
}
