#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number
 * Return: 0 If n == 0
 */

int sum_them_all(const unsigned int n, ...)

{
	va_list arguments;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(arguments, int);
	}
	va_end(arguments);
	return (sum);
}
