#include <stdio.h>
/**
* Main - this is a program that converts characters to intergers according
* to the ASCII value placement
* Noskshading
* Return (0);
*/
int main(void)
{	
	char grey;
	printf("Hello good day this is a program that would convert characters to integers and vise versa while also computing certain maths problems\n");
	
	printf("please enter a character: ");
	scanf("%c", &grey);
	printf("%i\n", grey);
	
	int integer;
	printf("please enter an interger between 0 - 127: ");
	scanf("%i", &integer);
	printf("%c\n", integer);
	
	//math with ASCII
	char maths = 'A' + '\t';
	printf("A(65) + \\t(11) = %c(%i)\n", maths, maths);//return to fix 
	return (0);
}
