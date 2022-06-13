#include "main.h"

/**
 * _strcpy - copies a string
 * @dest: destination
 * @src: source
 * Return: charracter pointer
 */

char *_strcpy(char *dest, char *src)
{
	while (src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
   	}
	return (dest);
}
