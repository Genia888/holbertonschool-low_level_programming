#include "main.h"
#include <stdio.h>

/**
 *factorial - Returns the factorial of a number
 *@n: number
 *Return: factorial
 */

int factorial(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
