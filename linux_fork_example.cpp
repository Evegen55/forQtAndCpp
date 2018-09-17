#include "linux_fork_example.h"

#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <sys/wait.h>
#include <sys/types.h>

int linux_fork_example()
{
    int pid = fork();
    switch(pid) {
        case -1:
            perror("fork");
            return -1;
        case 0:
            // Child
            printf("my pid = %i, returned pid = %i\n", getpid(), pid);
            break;
        default:
            // Parent
            printf("my pid = %i, returned pid = %i\n", getpid(), pid);
            break;
    }
    return 0;
}


int linux_fork_example2()
{
    int pid = fork();
        switch(pid) {
            case -1:
                perror("fork");
                return -1;
            case 0:
                // Child
                return 13;
            default: {
                // Parent
                int status;
                waitpid(pid, &status, 0);
                printf("exit normally? %s\n", (WIFEXITED(status) ? "true" : "false"));
                printf("child exitcode = %i\n", WEXITSTATUS(status));
                break;
            }
        }
        return 0;
}
