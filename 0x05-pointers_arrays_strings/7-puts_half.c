#include "main.h"

/**
 * get_length - gets length
 * @str: string
 * Return: void
 */

void get_length(char *str)
{
	int len = 0;

	while (str != '\0')
		len++;
	return (length - 1);
}

/**
 * puts_half - prints half a string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int len = get_length(str);
	int half = len / 2, i;

	for (i = half; i <= length; i++)
		_putchar(str[i];
	_putchar('\n');
}
