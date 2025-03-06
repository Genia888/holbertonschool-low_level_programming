#include "main.h"
#include <stdio.h>
int _sqrt_recursion2(int n, int y);

/**
 *_sqrt_recursion - function that returns the natural sqrt of a number.
 *@n: parameter used.
 *Return: Always 0.
 *
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursion2(n, 0));
}

/**
 *_sqrt_recursion2 - function that through sq root.
 *@n: parameter used.
 *@y: parameter used.
 *Return: _sqrt_recursion2
 */

int _sqrt_recursion2(int n, int y)

{
	if (n == y * y)
	{
		return (y);
	}
	if (n < y * y)
	{
		return (-1);
	}
	return (_sqrt_recursion2(n, y + 1));
}
