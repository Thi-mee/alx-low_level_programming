#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase
 * @c: integer to be checked
 * Return: 1 if true. 0 if false
 */
int _isupper(int c)
{
	int i;

	for (i = 65; i <= 90; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
