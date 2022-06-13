#include "main.h"

/**
 * puts2 - prints eevery other
 * character
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int len = 0, i;

	while (str[len] != '\0')
		len++;
	len -= 1;
	for (i = 0; i <= len; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
