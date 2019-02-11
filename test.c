#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int *array = (int*)malloc(3*sizeof(int));

    *array = 1;
   *(array+1) = 2;
   *(array+2) = 3;

   for (int i=0; i < 3; i++){

       printf("%d", array[i]);
       
       }
       printf("\n");
    return 0;
    }
