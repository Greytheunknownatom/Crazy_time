#include <stdio.h>
/**
 *  main - using sizeof to dynamically determine the size of data types
 *  char, int and float
 *  noskshade-dreamwalking
 *  Return: 0
*/
int main(void)
{
	char g;

	printf("size of type 'char' on my computer: %lu bytes\n", sizeof(char));
	printf("size of type 'int' on my computer: %lu bytes\n", sizeof(int));
	printf("size of type 'float' on my computer: %lu bytes\n", sizeof(float));
	printf("size of type of my variable g on my computer: %lu bytes\n", sizeof(g));

	return (0);
}
