#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main () {
    
    //print L0 like normal in the main process
    printf("L0\n");

    //check if inside parent process
    if (fork() != 0) {

        //when in the parent process, print L1
        printf("L1\n");

        //check if inside the parent process again
        //in this case the parent process is a child to the real parent
        //process. In the perspective of the child of the child process,
        //the first child is a parent.
        if (fork() != 0) {

            //when in the parent process, print L2
            printf("L2\n");
            
            //fork a child of the child of the child of the parent process
            fork();
            }
    }
    
    //every process prints Bye
    printf("Bye\n");
    
return 0;    
}


/*
this program checks if it's inside the parent process TWICE.
It will always be in the parent process so everything prints
normally. The last if statement tells the program to fork 
the process. This happens everytime there is an if statement
so you end up with 3 children. In the end, there is one 
print-out of "Bye" for every process

output:

L0
L1
L2
Bye
Bye
Bye
Bye
*/
