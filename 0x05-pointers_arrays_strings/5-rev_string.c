#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{

	while (s)
		s++;
	while (s != '\0')
	{
		_putchar(*s--);
	}
	_putchar('\n');
}
