#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array
 * @size: the size of the array
 * @cmp: pointer to the function
 * Return: int_index returns the index of the first element
 *    -for which the cmp function does not return 0
 *    -If no element matches, return -1
 *    -If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == 0 || cmp == 0)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		cmp(array[i]);
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
