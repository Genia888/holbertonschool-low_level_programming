#include "main.h"

/**
 *print_last_digit - prints the last digit
 *@n: number
 *Return: value of the last digit
 */

int print_last_digit(int n)

{
	int lastd = (n % 10);

	if (lastd < 0)
	{
		lastd *= -1;

	}
	_putchar (lastd + '0');

		return (lastd);
}
