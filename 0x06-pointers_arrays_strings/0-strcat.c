#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: destination
 * @source:
 * Return: pointer
 */

char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}	
