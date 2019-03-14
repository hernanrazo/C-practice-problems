#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main () {

    void *v = 0;
    void *p;
    void *q;

    for (int i = 0; i < 10; i ++) {

        p = malloc(sizeof(void *));

        *(void **)p = v;
        
        v = p;
    }


    /* choice A: 

    for (int j = 0; j < 10; j++) {

        free p[j];
    }
    */

    /* choice B:

    for (int j = 0; j < 10; j++) {

        p = v[j];
        q = *p;
        free(p);
        p = q;
    }
    */


    /* choice C:

    p = *(void **)v; 
    while (p) {

        q = *p;
        free(p);
        p = *q;
    }
    */

    /* choice D: */

    p = v;

    while (p) {

        q = *(void **)p;

        free(p);
        p = q;
    }

    printf("it worked\n");

    return 0;
}
