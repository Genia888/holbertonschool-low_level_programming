#include "main.h"
#include <stdio.h>

/**
 *_puts - Write a function that prints a string
 *followed by a new line, to stdout
 *@str : string
 *Return: Always 0.
 */

void _puts(char *str)

{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
