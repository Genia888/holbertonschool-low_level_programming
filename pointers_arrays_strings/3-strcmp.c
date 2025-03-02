#include "main.h"
#include <stdio.h>

/**
 *_strcmp - Write a function that compares two strings.
 *@s1: number
 *@s2: number
 *Return: Always 0.
 */

int _strcmp(char *s1, char *s2)

{
	int a = 0;
	int b = 0;

	while (s1[a] != '\0' && s2[b] != '\0')
	{
		{
			if (s1[a] != s2[b])
				return (s1[a] - s2[b]);
		}
		a++;
		b++;
	}
	return (0);
}
