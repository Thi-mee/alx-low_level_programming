#include <stdio.h>

/**
 * main - finds the largest of
   prime factors
 * Return: 0 (Success)
 */

int main(void)
{
	unsigned long num = 612852475143;
	int divisor = 2;

	while (divisor < num)
	{
		if (num % divisor == 0)
		{
			num \= divisor;
			divisor = 2;
		}
		else
			divisor++;
	}
	printf("%d\n", num);
	return (0);
}

