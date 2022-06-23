#include "main.h"

/**
 * _pow_recursion - returns the value
 * of x raised to the power of y
 * @x: number
 * @y: power
 * Return: integer result
 */

int _pow_recursion(int x, int y)
{
	int result;
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	result = _pow_recursion(x, y - 1);
	result = result * x;
	return result;
}
