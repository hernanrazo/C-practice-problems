#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>




int g = 10;

int q3() {

     static int g = 5;
     return ++g;
}

 int q4 () {

     extern int g;
     return ++g;
}

 int q5() {

    int g = 1;
    return ++g;
}

int main() {
    int result = q3() + q3() + q4() + q4() + q5() + q5();

    printf("value = %d\n", result);
    
    return 0;
}
