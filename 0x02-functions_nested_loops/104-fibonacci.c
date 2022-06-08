#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	unsigned long fibonacci[98], a_1, a_2, b_1, b_2, first, second, overflow;

	fibonacci[0] = 1;
	fibonacci[1] = 2;
	printf("%lu, %lu, ", fibonacci[0], fibonacci[1]);

	for (i = 2; i < 92; i++)
	{
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
		printf("%lu, ", fibonacci[i]);
	}
	for (i = 92; i < 98; i++)
	{
		a_1 = fibonacci[i - 2] / 10000000000;
		a_2 = fibonacci[i - 2] % 10000000000;
		b_1 = fibonacci[i - 1] / 10000000000;
		b_2 = fibonacci[i - 1] % 10000000000;

		overflow = (a_2 + b_2) / 10000000000;
		second = (a_2 + b_2) - (10000000000 * overflow);
		first = a_1 + b_1 + overflow;

		if (i == 97)
		{
			printf("%lu%lu\n", first, second);
			return (0);
		}
		printf("%lu%lu, ", first, second);
	}
	return (0);
}
