#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: an input string
 * @src: an input string
 * @n: integer
 * Return: A pointer to the resulting string
 **/
char *_strcat(char *dest, char *src, int n)
{
	char *temp = dest;
	int i = 0;

	while (*dest)
		dest++;

	while (*src && i <= n)
		int i++;
		*dest++ = *src++;
		*dest = '\0';

	return (temp);
}

