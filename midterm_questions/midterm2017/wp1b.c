
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>


int main() {

    if (fork()) {

        printf("0");
        wait(NULL);
        printf("1");
    } else {

        if (fork()) {

            printf("2");
            wait(NULL);
            printf("3");
        } else {

            printf("4");
        }
    }
    return 0;
}
