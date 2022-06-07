#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Check description
 * Description: It prints all lower case alphabets.
 * Return: void.
 */
void print_alphabet_x10(void)
{
	char art;
	int i;
	for (i = 0; i < 10; i++)
	{
		for (art = 'a'; art <= 'z'; art++)
		{
			putchar(art);
		}
			putchar('\n');
	}
}
