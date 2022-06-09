#include "main.h"

/**
 * print_number - print an integer, without using long, arrays, or pointers
 * @n: number to be printed
 */

void print_number(int n)
{
	unsigned int tens, digit, number = n;
	double position_check = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			number = n * -1;
			_putchar('-');
		}

		while (position_check <= number)
			position_check *= 10;
		tens = position_check / 10;

		while (tens >= 1)
		{
			digit = number / tens;
			_putchar(digit + '0');
			number = (number - (tens * digit));
			tens /= 10;
		}
	}
}
