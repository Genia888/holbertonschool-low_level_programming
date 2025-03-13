#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - function that creates an array of integers.
 * @min:minimun numbers
 * @max:maximum numbers
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int a;
	int b = 0;
	int *p;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (a = min ; a <= max ; a++)
	{
		p[b] = a;
		b++;
	}
	return (p);
}
