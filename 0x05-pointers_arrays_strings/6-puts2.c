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

	while (str[index] != '\0')
		index++;
	index -= 1;
	for (; index > 0; index--)
	{
		if (index % 2 == 0)
			_putchar(str[index]);
		else
			continue;
	}
	_putchar('\n');
}
