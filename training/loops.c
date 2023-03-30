#include <stdio.h>
/* teaching my self loops floats and doubles */
/* noskshade-dreamwalking */
/* program will return omn success */
/**
 * main - here the variable values can be modified, starting from low
 * increase the value untile something odd appears in the results(compilaion)
*/
int main(void)
{
	int numofloops = 13;
	// noskshade says no modifications beyond this point
	float n = 0.1f;
	float o = 0;
	double s = 0.1;
	double k = 0;

	printf("At the start, our target float o is:%f\n", o);
	printf("At the start, our target double k is:%f\n", k);
	// while changing the values its observed the code loops through while adding to the variables o and k in set amounts of 0.1 on each loop
	for (int i = 0; i < numofloops; i++)
	{
		o += n;
		k += s;
	}

	printf("At the end, our target float b is:%f\n", o);
	printf("At the end, our target double k is:%f\n", k);
	return (0);
}
