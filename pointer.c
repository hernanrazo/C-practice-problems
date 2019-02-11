#include <stdio.h>
#include <stdlib.h>


int main () {

	//initialize an array of size 10
	int array[10];
	
	//initialize a pointer var of type int
	int *p;

	//set that pointer to the first element of the array
	p = &array[0];

	//set the value of the pointer to 1. This also changes the value 
	//of the array[0] to 1 as well.
	*p = 1;

	//now by adding 1 to p, you skip over to the next memory 
	//address in the array, thus giving you the ability to change 
	//all other values
	*(p +1) = 2; 
	*(p +2) = 3;
	*(p +3) = 4;
	*(p +4) = 5;
	*(p +5) = 6;
	*(p +6) = 7;
	*(p +7) = 8;
	*(p +8) = 9;
	*(p +9) = 10;

	//print the whole array
	for (int i = 0; i < 10; i ++) {


		printf("Element[%d] = %d\n", i, array[i]);
	}

	return 0;
}