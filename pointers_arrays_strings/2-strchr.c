#include "main.h"
#include <stdio.h>


/**
 *_strchr - Write a function that locates a character in a string.
 *@s: string
 *@c: character
 *Return: Always 0.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0' && *s != c)
		s++;
	if (*s == c)
		return (s);
	else
		return (NULL);
}
