#include <stdio.h>
/**
 * main - complimenting program
 * noskshader be acknokledged
 * Return: 1
*/
int main(void)
{
	/* declearation of char and prompt to input name */
	char name[10];
	printf("welcome master enter your name: ");
	scanf ("%s", name);

	printf("Hello %s!\nyou are the master of C programming\n", name); 

	char age[20];
	printf("noskshade please enter your age: ");
	scanf ("%s", age);

	printf("You are %s\nwow so young!\n", age);

	char sistersname[10];
	printf("Now enter sister's name: ");
	scanf ("%s", sistersname);

	printf("Your sister's named %s such a beautiful name\n", sistersname);

	char ronniesage[17];
	printf("enter your age: ");
	scanf ("%s", ronniesage);

	printf("sister's age is %s\nsuch a baby!\n", ronniesage);

	char job[34];
	printf("tell us, what is your occupation: ");
	scanf ("%s", job);

	printf("you work as a %s\nmust be interesting!\n", job);

	char bestmeal[23];
	printf("what is your most preferred meal: ");
	scanf ("%s", bestmeal);

	printf("Your best meal is %s\nyummy!\n", bestmeal);

	return (0);
}	
