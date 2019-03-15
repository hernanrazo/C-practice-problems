#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int done = 0;

void handler (int sig) {

    printf("0");
    done = 1;
}

int main () {

    pid_t pid;
    int status;
    signal(SIGUSR1, handler);

    /*
    if child is not there and everything
    is done, return with errors
    */

    //if child is running
    if ((pid = fork()) == 0) { 
        
        //while child is not done
        while (!done);
        printf("1");

        //exit with errors
        exit(2); 
    
    /*
    error free,
    child reaped successfully
    */

    //if no child is present
    } else {

        printf("3");
        kill(pid, SIGUSR1);
        
        //if child needs status?
        if (wait(&status) > 0) {

            //get exit status 
            printf("%d", WEXITSTATUS(status));
        }
    }

    if (done) {

        printf("4");
        
    } else {

        printf("5");   
    }
    return 0;    
}
