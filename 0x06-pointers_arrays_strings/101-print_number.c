#include "main.h"

/**
 * print_number - print an integer, 
 * without using long, arrays, or pointers
 * @n: number to be printed
 * Return: void
 */

void print_number(int n)
{
	unsigned int index, digit;
	unsigned int number = (n < 0) ? n*-1 : n;
	double divider = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			_putchar('-');
		}

		while (divider <= number)
			divider *= 10;
		index = divider / 10;

		while (index >= 1)
		{
			digit = number / index;
			_putchar(digit + '0');
			number = (number - (index * digit));
			index /= 10;
		}
	}
}
