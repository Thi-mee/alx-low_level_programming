#include "main.h"

/**
 * print_square - prints a square
 * @size: size of square in int
 */

void print_square(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i < square; i++)
		{
			for (j = 0; j < square; j++)
				_putchar('#');

			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
