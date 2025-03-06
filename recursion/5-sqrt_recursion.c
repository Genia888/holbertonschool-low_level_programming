#include "main.h"
#include <stdio.h>

/**
 *_sqrt_recursion - function that returns the natural square root of a number
 *@n: number
 *Return: the function should return -1
 */

int _sqrt_recursion(int n)

{
	int i;


	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (n);
	}

	i = _sqrt_recursion(n - 1);

	if (i * i == n)
	{
		return (i);
	}

	else
	{
		return (i + 1);
	}
}
