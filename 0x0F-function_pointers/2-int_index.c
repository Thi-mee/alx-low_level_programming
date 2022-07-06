#include "function_pointers.h"

/**
 * int_index - finds char in an array
 * @array: array
 * @size: size of the array
 * @cmp: pointer to function
 * Return: index of char
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, j;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (; i < size; i++)
	{
		j = cmp(*(array + i));
		if (j != 0) return (i);
	}
	return (-1);
}
