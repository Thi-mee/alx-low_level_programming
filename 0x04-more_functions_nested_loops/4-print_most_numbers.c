#include "main.h"

/**
 * print_most_numbers - prints most 
 * numbers
 *
 * Return: void
 */

void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == 4 || i == 2)
			continue;

		_putchar(i);
	}

	_putchar('\n');
}
