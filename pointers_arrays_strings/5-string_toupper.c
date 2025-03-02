#include "main.h"
#include <stdio.h>

/**
 *string_toupper - Write a function that changes,
 *all lowercase letters of a string to uppercase
 *@s: string
 *Return: s
 */

char *string_toupper(char *s)
{
	int i = 0;

	for  (i = 0; s[i] != '\0'; i++)
	{

		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}
	return (s);
}
