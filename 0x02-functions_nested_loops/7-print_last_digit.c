#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @a: intiger to be checked
 * Return: last digit(integer)
 */
int print_last_digit(int a)
{
	int r;

	if (r < 0)
		r = r * -1;
	r = a % 10;
	_putchar('0' + r);

	return (r);
}
