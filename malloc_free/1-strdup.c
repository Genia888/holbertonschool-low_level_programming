#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *_strdup - change pointer
 *@str :copy this string
 *Return: Always 1 or NULL if == 0
 */

char *_strdup(char *str)
{
	int i = 0;
	int len = 0;
	char *dest;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
	{
		len++;
	}

	dest = malloc(sizeof(char) * len + 1);

	if (dest == 0)
		return (NULL);

	for (; i < len; i++)
		dest[i] = str[i];

	return (dest);
}
