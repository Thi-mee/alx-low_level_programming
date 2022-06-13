#include "main.h"

/**
 * get_length - gets length
 * @str: string
 * Return: int
 */

int get_length(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len - 1);
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

	for (i = half-1; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
