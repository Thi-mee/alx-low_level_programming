#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	unsigned long sum, a, b, a_1, a_2, b_1, b_2, first, second, overflow;

	a = 1;
	b = 1;
	printf("%lu", a);

	for (i = 2; i < 92; i++)
	{
		sum = a + b;
		a = b;
		b = sum;
		printf(", %lu", sum);
	}

	a_1 = a / 10000000000;
	a_2 = a % 10000000000;
	b_1 = b / 10000000000;
	b_2 = b % 10000000000;

	for (i = 92; i < 99; i++)
	{

		overflow = (a_2 + b_2) / 10000000000;
		second = (a_2 + b_2) - (10000000000 * overflow);
		first = a_1 + b_1 + overflow;

		printf(", %lu%lu", first, second);

		a_1 = b_1;
		a_2 = b_2;
		b_1 = first;
		b_2 = second;
	}
	return (0);
}
