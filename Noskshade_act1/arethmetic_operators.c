#include <stdio.h>
int main(void)
{
	int co = (2 + 3 * 3 / 3) - 2;
	printf("%d\n", co);
	int un = (2 + 1 * 3 - 1) / 2;
	printf("%d\n", un);
	int t = (1 + 2 - 2) + 0 * 1;
	printf("%d\n", t);
	printf("this programme illustrates arethmetic operators,\nwhile simultanously utilizing constants\n");

	//initializing const and declearation
	printf("initializing const\n");
	
	const int HERAGE = 23;
	const int HISAGE = 22;
	const char his_name[45];
	const char her_name[45];
	printf("first print - %d,%d\n", HERAGE, HISAGE);
	
	//arithemetic operators
	int calc = 100 + 30;
	int calc2 = 40 + HERAGE;
	int calc3 = 10 + HISAGE;
	printf("second print - %d\n", calc);
	printf("third print - %d\n", calc2);
	printf("fourth print - %d\n", calc3);
	
	printf("fifth print - %d\n", calc3 + calc);
	printf("sixth print - %d\n", HERAGE + HISAGE + calc3 + calc + calc2);
	printf("seventh print - %d\n", HERAGE - HISAGE);
	printf("eight print - %d\n", calc2 - HISAGE);
	printf("ninth print - %d\n", calc3 * calc2 + calc);
	printf("tenth print - %d\n", HISAGE * HERAGE);
	printf("eleventh print - %d\n", calc / HISAGE);
	printf("twelfth print - %d\n", calc % HERAGE);
	printf("thirteenth print - %d\n", calc % calc3);
	printf("fourtheenth print - %d\n", ++calc);
	printf("fiftheenth print - %d\n", ++calc2);
	printf("16th print - %d\n", --calc3);
	printf("17th print - %d\n", --calc3 * calc2);
	printf("18th print - %d\n", --calc + HISAGE);

	//assignment operators
	int vera = 12;
	vera += 10;
	
	printf("19th print - %d\n", vera);
	vera -= 11;
	printf("20th print - %d\n", vera);
	vera *= 8;
	printf("21st print -  %d\n", vera);
	/*printf("hprint - %d\n", ++calello new user,\nplease input your details as requested,\nthey would be used in the coalition of final results\n");
	printf("NAME :\n");
	scanf ("%s\n", his_name);
	printf ("%s\n", his_name);*///tried writing into constants here didnt work (return to fix)
	return (0);
}
