#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

#define FOO(x) (2*x -x)

int main() {


    int val = 10;

    printf("value = %d\n", FOO(val + 5));


    return 0;    
}
