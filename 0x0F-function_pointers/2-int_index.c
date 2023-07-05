#include "function_pointers.h"

/**
 * int_index - Looks for an int
 * @array: Arrary containing elements
 * @size: Number of elements
 * @cmp: Function which compares vaules
 *
 * Return: -1(no element match/ size <0) return pointer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}

