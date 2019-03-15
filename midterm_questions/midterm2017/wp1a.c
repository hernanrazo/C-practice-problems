#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main() {

    for (int i = 0; i < 2; i ++) {

        if (fork()) {

            printf("%d\n", i);
            
        } else {

            printf("%d\n", 3 - i);
        }
    }

    return 0;
}


