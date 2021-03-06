#include "main.h"

/**
 * _strlen_recursion - returns length
 * of a string
 * @s: string
 * Return: integer(length)
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s == '\0')
		return (0);

	n = _strlen_recursion(s + 1);
	n++;
	return (n);
}
