#include <stdio.h>

/**
 * main - prints fizzbuzz
 *
 * Return: 0 if successful
 */

int main(void)
{
	int count;

	for (count = 1; count <= 100; count++)
	{
		if (count % 15 == 0)
			printf("FizzBuzz ");
		else if (count % 3 == 0)
			printf("Fizz ");
		else if (count % 5 == 0)
			print("Buzz ");
		else
			printf("%d ", count);
	}
	return (0);
}
