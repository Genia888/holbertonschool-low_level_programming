#include "main.h"
#include <stdio.h>
int prime(int x, int y);

/**
 *is_prime_number - function returns 1 if the input is prime.
 *@n: parameter used.
 *Return: prime function.
 *
 */

int is_prime_number(int n)
{
	return (prime(n, 2));
}

/**
 *helper_prime - function that checks for prime number.
 *@x: parameter used.
 *@y: parameter used.
 *Return: prime function.
 */

int prime(int x, int y)
{
	if (x <= 1)
		return (0);
	if (x == y)
		return (1);
	if (x % y == 0)
		return (0);
	else
		return (prime(x, y + 1));
}
