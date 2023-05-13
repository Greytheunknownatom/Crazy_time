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
	int ageofthestudent;
	float studentfeetotal;
	char studentgradeletter;

	/* noskshade declearing variables or values */
	studentrank = 4;
	studentfeetotal = 247678888845.45;
	studentgradeletter = 'B';
	ageofthestudent = 23;

	/* noskshade printing the student's information */
	printf("student's rank in class: %dth\n", studentrank);
	printf("student's total fees: $%f\n", studentfeetotal);
	printf("student's grade: %c Class\n", studentgradeletter);
	printf("he is %d years old\n", ageofthestudent);
}
