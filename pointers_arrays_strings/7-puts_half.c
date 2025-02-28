#include "main.h"

/**
 *puts_half - Write a function that prints half of a string,
 *followed by a new line
 *@str: string of character
 *Return: Always 0.
 */


void puts_half(char *str)
{
	int l = 0;
	int x;
	int i;

	while (str[l] != '\0')
	{
		l++;
	}
	x = (l + 1) / 2;
	for (i = x; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
