#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _calloc - calloc function
 * @nmemb: parameter
 * @size: size
 * Return: abc
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *abc;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	abc = malloc(nmemb * size);

	if (abc == NULL)
		return (NULL);

	while (i < nmemb * size)
	{
		abc[i] = 0;
		i++;
	}
	return (abc);
}
