#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks if a digit is entered
 * @c : character to be checked
 * Return: 1 if digit. else 0
 */

int _isdigit(int c)
{
	int i;
	for (i = 48; i <= 57; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}

