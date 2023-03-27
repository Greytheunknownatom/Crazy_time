#include <stdio.h>
/**
 * main - complimenting grey
 * nosk be acknokledged
 * Return: 1
*/
int main(void)
{
	/* declearation of char and prompt to input name */
	char name[10];
	printf("welcome master enter your name: ");
	scanf ("%s", name);

	printf("Hello %s!\n", name); 

	char age[20];
	printf("noskshade please enter your age: ");
	scanf ("%s", age);

	printf("You are %s\n", age);

	char sistersname[10];
	printf("Now enter sister's name: ");
	scanf ("%s", sistersname);

	printf("Your sister's named %s\n", sistersname);

	char ronniesage[17];
	printf("enter your age ronnie: ");
	scanf ("%s", ronniesage);

	printf("Ronnie is %s\n", ronniesage);
	return (1);
}	
