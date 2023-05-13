
/* four main operators  (+ - / * )*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{

	/*declear variable*/
	int a_tale = (2 + 3 * 4 / 3 - 2) + (2 + 3 * 4 / 3 - 2) + 2;

	/*declearation of char*/
	char identify[423];
	printf("hello faith\n");
	printf("how was your day faith: ");
	scanf ("%s", identify);
	printf("so your day was %s, hmmm intresting\n", identify);
	printf("oh %s, well mine was all about character development\n", identify);

	char inquiry[678];
	printf("so yah fed yet faith? :");
	scanf ("%s", inquiry);
	printf("oh %s?, say more sweet\n", inquiry);     
        
        char food[888];
	printf("wah did you eat faith: ");
	scanf ("%s", food);
	printf("ahh nice %s sounds delicious, sadly am not hungry today\n", food);
	int * dictate;
	printf("rate your day on a scale of 1 to 10 ?:");
	scanf ("%d", dictate);
	printf("%ls is pretty cool", dictate);

	printf("%d for me\n", a_tale);
	/**scanf (%d, )
	printf("%d\n", g);**/ //fix this!
	return (0);
}
