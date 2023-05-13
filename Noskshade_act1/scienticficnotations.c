#include <stdio.h>

int main(void)
{
	//270000
	printf("How many dogs do you have?: ");
	double dogs;
	
	scanf("%lf", &dogs);

	printf("%f\n%e\n%g\n", dogs, dogs, dogs); 
	/*conversion characters
	-----------------------
	%f - decimal notation: 25000
	%e - scientific notation: 2.5e4
	%g - computer decides the notation(decision is based on the size of the exponent that is if the exponet is < -4 scientific notation would not be put in or if > 5. decimal notation would be used if its not any of these conditions)
	when runing scanf to collect inputs for numeric data types the conversion character %lf should be used insted of the basic %f */
//working with inputs now -- double dogs would be decleared but uninitialized

return (0);
}
