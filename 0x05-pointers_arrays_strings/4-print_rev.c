#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	
	for (; len > 0; len--)
	{
		_putchar(s[len-1]);
	}
	_putchar('\n');
}
		
