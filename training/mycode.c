#include <stdio.h>
/**
 * main - print out basic information of a student
 * noskshading
 * Return: void
*/
int main(void)
{
	/* noskshade listing data types */
	int studentrank;
	float studentfeetotal;
	char studentgradeletter;

	/* noskshade declearing variables or values */
	studentrank = 3;
	studentfeetotal = 247678888845.45;
	studentgradeletter = 'B';

	/* noskshade printing the student's information */
	printf("student's rank in class: %dst\n", studentrank);
	printf("student's total fees: $%3.2f\n", studentfeetotal);
	printf("student's grade: %c\n", studentgradeletter);
}