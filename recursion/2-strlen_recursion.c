#include "main.h"
#include <stdio.h>

/**
 *_strlen_recursion - function that returns the length of a string.
 *@s: char
 *Return: Always 0.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (*s);
	else
		return (1 + _strlen_recursion(s + 1));
}
