#include "function_pointers.h"

/**
 * array_iterator - iterates through an array
 *
 * @array: array
 * @size: Length of array
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (array == NULL || size == 0 || action == NULL)
		return;
	for (; i < (int)size; i++)
	{
		action(*(array + i));
	}
}
