#include  <stdio.h>
#include <stdlib.h>

// declare function foo
// this function will print out the memory size of the pointer and the actual value
// notice that he memory WILL NOT be accurate though
// this is because pointers passed as argumants
void foo(char *p) {
    
    printf("foo has p of size = %lu\n", sizeof p );
    printf("foo has *p of size = %lu\n", sizeof *p);

    }
