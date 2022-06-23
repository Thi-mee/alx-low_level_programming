#include "main.h"

/**
 * check_sqrt - checks for sqrt
 * @n: number
 * @i: times
 * Return: integer
 */

int check_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (check_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - returns the
 * natural square root of a number
 * @n: integer
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (check_sqrt(n, 0));
}
