
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>


int main () {

    char *args[] = {"hello", "world"};
    void *v = args;

   // printf("%c %c\n", *v, *(v + 1));
   printf("%s %s\n", *(char **)v, *((char **)v + 1));
   // printf("%s %s\n", *(char*)v, *((char *)v, *(char *)v + 1));
   // printf("%s %s\n", **v, **(v + 1));

    return 0;
}
