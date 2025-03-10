#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - creating an array
 *@size: size of the arr
 *@c: strings
 *Return: NULL if == 0 or arr
 *
 */

char *create_array(unsigned int size, char c)
{
	char *array = malloc(sizeof(char) * size);
	unsigned int i = 0;

	if (size == 0 || array == 0)
		return ('\0');
	for (; i < size ; i++)
		array[i] = c;
	return (array);
}
