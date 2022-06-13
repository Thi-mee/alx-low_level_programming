#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	for (; len >= 0;)
	{
		_putchar(*s[len--]);
	}
	_putchar('\n');
}
