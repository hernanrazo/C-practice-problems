#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
/*
basic showcase of getppid()_and getpid() functions

getppid() - returns parent PID
getpid() - returns child PID
*/

int main () {

    printf("parent = %d\n", getppid());
    printf("child = %d\n", getpid());
    
    return 0;
}
