#include "main.h"
#include <stdio.h>

/**
 * print_line - function that draws a straight line in the terminal
 * @n: is the number of times the character
 * Return: Always 0.
 */

void print_line(int n)


{
	int x;

	for (x = 0; x <= n; x++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
