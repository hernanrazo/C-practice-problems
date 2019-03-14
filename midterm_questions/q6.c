#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void repeat(void(*f)(), int n) {

    for (int i = 0; i < n; i ++) {

        f();
    }
}

void todo() {

    printf("gucci gang\n");
}


int main() {

    repeat(todo, 10);

    return 0;
}
