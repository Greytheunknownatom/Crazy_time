#include <stdio.h>

int main(void)
{
	//28000
	int dogs = 2.8e4; //(hardcoding) isnt so nice coz of changes so using data files or inputs are much better
	printf("%i\n", dogs);

// data types: int double float


// floating point
// precision refers to -- how much data the variable can hold
/* floating points numbers are stored in scientific notation that is:
 24000 can be:
 2.4 * 10^4
 .000045 becomes:
 4.5 * 10^5 
 00034 also becomes
 3.4 * 10^4 */ 
	printf("%i %f %f\n", 1, 1.1111, 13333.111111f);
}
// use double for more precision and float for low memory programs
