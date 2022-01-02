#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <string>
#include <unistd.h>
#include <spawn.h>
#include <sys/wait.h>
using namespace std;

extern char **environ;

void run_process1(int& processID1)
{
    pid_t pid;
    char* text = strdup("My string literal!");
    char *argv[] = {NULL};
    int status;
    //printf("Run command: %s\n", cmd);
    status = posix_spawn(&pid, "/home/traistorm/process test A/processA", NULL, NULL, argv, environ);
    if (status == 0) 
    {
        printf("Child pid 1: %i\n", pid);
        
    } 
    else 
    {
        printf("posix_spawn: %s\n", strerror(status));
    }
    processID1 = pid;
    
}
void run_process2(int& processID2)
{
    pid_t pid;
    char* text = strdup("My string literal!");
    char *argv[] = {NULL};
    int status;
    //printf("Run command: %s\n", cmd);
    status = posix_spawn(&pid, "/home/traistorm/process test B/processB", NULL, NULL, argv, environ);
    if (status == 0) 
    {
        printf("Child pid 2: %i\n", pid);
        
    } 
    else 
    {
        printf("posix_spawn: %s\n", strerror(status));
    }
    processID2 = pid;
    
}

int main(int argc, char* argv[])
{
    int pid1, pid2;
    run_process1(pid1);
    run_process2(pid2);
    printf("test");
    return 1;
}
