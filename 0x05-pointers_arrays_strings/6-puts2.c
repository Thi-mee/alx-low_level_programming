#include "main.h"

/**
 * puts2 - prints eevery other
 * character
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int index = 0;

	while (str != '\0')
		index++
	for (; index > 0; index--)
	{
		if (index % 2 = 0)
			_putchar(str[index - 1]);
		else
			continue;
	}
	_putchar('\n');
}
