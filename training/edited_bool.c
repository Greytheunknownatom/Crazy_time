#include <stdio.h>
#include <stdbool.h>
 /**
 * main - this program runs on the boolian principle defining if a statement
 * is true of false but with a new added libry file <stdbool.h>
 * Return: 0
 */
  int main(void)
{
/** observe here no use placing _Bool since the bool lib has been included
* here bool is instead uses which is lower cased like other data types
* there will also be no use for numbers attributed
* to the stated true or false question
*/
         bool greyisacoolguy = true;

         printf("is grey a cool guy?\n(1 is yes. 0 is no) %i\n", greyisacoolguy);

	printf("%i\n", greyisacoolguy + 100);
         return (0);
}
