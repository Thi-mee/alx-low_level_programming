#include <stdio.h>
#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 * @a: integer we'r converting
 * Return: Absolute value(can be any integer)
 */
int _abs(int a)
{
	if (a > 0 || a == 0)
		return (a);
	else
		return (a * -1);
}
