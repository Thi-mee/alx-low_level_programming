#include "main.h"

/**
 * print_array - print's out an array
 * @a: array
 * @n: number to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d",*a++);
		if (i != n - 1)
			printf(", ");
	}
}
