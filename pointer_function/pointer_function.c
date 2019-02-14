#include <stdio.h>
#include <stdlib.h>

//make sure to include the header file for this program
#include "pointer_function.h"



int main() {
    
    //notice that we set this str to 80
    char str[80];

    printf("Within main function, str size = %lu\n", sizeof str);

    //called foo function that we defined in the header file
    foo(str);

    return 0;
    }
