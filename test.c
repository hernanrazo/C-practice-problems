#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    //initialize an array pointer of type int
    //allocate memory of 3 bytes into that array
    int *array = (int*)malloc(3*sizeof(int));
    
    //set the first array value to 1
    *array = 1;

    //access the 2nd array element by adding 1 to the memory address of the 1st pointer 
    //set the value of that element to 2
   *(array+1) = 2;

   //access the 3rd array element by adding 2 to the memory address of the 1st pointer
   //set the value of that element to 3
   *(array+2) = 3;

    //iterate through the array one element at a time
   for (int i=0; i < 3; i++){
        
       //print the value in each element
       printf("%d", array[i]);
       
       }
       printf("\n");
    return 0;
    }
