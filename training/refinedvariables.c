#include <stdio.h>
int main(void)
{
// Create variables
	int myfigureforint = 10;
	float myfigureforfloat = 4.90;
	char letter = 'D';
	double myfigurefordouble = 4.945; 
	printf("%i\n", myfigureforint);
	printf("%f\n", myfigureforfloat);
	printf("%c\n", letter);
	printf("%f\n", myfigurefordouble);
	
	printf("my favorite figure is %i\n", myfigureforint);
	printf("my selected figure for float is %f\n", myfigureforfloat);
	printf("my selected letter is %c\n", letter);
	printf("my selected figure for double variable type is %f\n", myfigurefordouble);
	
	printf("my figures are stated as %i for int,\n%f for float,\n%f for double with character of %c\n", myfigureforint, myfigureforfloat, myfigurefordouble, letter);

	myfigureforint = 23;

	printf("I have changed my seleted figure for int to %i\n", myfigureforint);
	
	//assigning the vaue of one variable ro another
	int rewind = 12;
	int fedrewind = 30;
	rewind = fedrewind;
	printf("%d\n", rewind);

	//copying values to empty variables
	int fog = 14;
	int foglets;
	foglets = fog;
	printf("lol combination from the witcher %i\n", foglets);
	
	//adding variables together
	int g = 4;
	int h = 4;
	int k = 4;
	int sum = g + h - k;
	printf("%d\n", sum);

	//declearation of multiple variables
	int d = 4, a = 10, q = 30;
	printf("%i\n", d + a + q);

	//assigning a value to multiple variables of the same data type
	int c, y, j, l;
	c = y = j = l = 40;
	printf("%i\n", c + y / j * l + 100);
	
	//c variables must use identifiers and these identifiers can be short names or more descriptive
	//names can be descriptive like age, sum, totalvolume etc
	
	//c type conversion: here value of one data type is converted to another type
	int vi = 9;
	int ji = 2;
	int sum2 = 9 / 2;
	printf("%i\n", sum2);
	
	//implicit conversion
	//automatic conversion of data value types

	float myfloat = 10;
	printf("%f\n", myfloat);
	
	int myint = 10.0000;
	printf("%i\n", myint);
	
	float hisfloat = 3.132233423423;
	printf("%f\n", hisfloat);

	double hisdouble = 3.1322334;
	printf("%lf\n", hisdouble);

	float myfloatagain = 3.978;
	printf("%.10f\n", myfloatagain);
	
	float sumagain = 5 / 3;
	float sumoncemore = 9 / 4;
	
	printf("%f\n", sumagain + sumoncemore);
	return (0);

}
