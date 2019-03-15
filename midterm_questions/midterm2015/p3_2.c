#include <stdio.h>
#include <sys/types.h>
#include<sys/wait.h>
#include <unistd.h>

int main () {

    printf("1"); //print this straight up since nothing has happened yet
    fork();
    
    printf("2"); //parent and child #1 print normally
    wait(NULL);  //block process

    if (fork() == 0) { //in parent

        printf("3");
        
    } else { // in child

        printf("4");
    }
return 0;
}
