#include <stdio.h>
/**
* this is a program that interacts with the user while
* telling a spontanouse tale
* Return: void
*/

int main(void)
{
		/* declearation	*/
	int lol;

	lol = 4;
	
	char BookReviewRank = 'A';
	char MovieReviewRank = 'B';
	double bookprice = 6000.100;
	double ticketprice = 3000.10;
	
	/* start of the tale */

	printf("A spontanous tale");
	printf("The movie scored a review rank of %c and it's ticket costs $%.2f\n", MovieReviewRank, ticketprice);
	printf("The book scored a review rank of %c and it's priced at $%.2f\n ", BookReviewRank, bookprice);
	
	printf("He laughed %itimes at the sight of them prices\n", lol);
	
		
	lol = 8;
        printf("plot twist he laughed %i-times\n", lol);

	int integer;

	printf("How many times did he laugh: ");
	scanf ("%i", & integer);
	printf("He laughed %i-times\n", integer);
	
	bookprice = ticketprice;
	
	printf("IN a minute like the universe was being funny\nThe prices of books and ticket's instantly equally cost: $%2.f Naira\n", bookprice = ticketprice);
	char entitiyname[17];
	
	printf("This inteligent-life-form\nWhat name does this being bear: ");
	scanf ("%s", entitiyname);
	printf("Interesting %s let's continue now with the tale\n", entitiyname);
	printf("to be continued %s\nMy program ends here\n", entitiyname);
}
