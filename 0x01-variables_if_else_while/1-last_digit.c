#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
* main - Entry point;
*
* Return: Always 0 (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int last_digit = n % 10;
	if (last_digit > 5)
		printf("Last Digit of "%d" is "%d" \
		and is greater that 5\n");
	else if (last_digit == 0)
		printf("Last Digit of "%d" is "%d" \
		and is 0\n");
	else 
		printf("Last Digit of "%d" is "%d" \
		and is less than 6 and not 0\n");
	return (0);
}
