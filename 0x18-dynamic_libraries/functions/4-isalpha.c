#include <stdio.h>
#include "main.h"

/**
 * _isalpha - function to check for alphabetic characters
 * @c: character to be checked
 * Return: 1 if alphabetic, 0 otherwise
 */
int _isalpha(int c)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			return (1);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
			return (1);
	}
	return (0);
}
