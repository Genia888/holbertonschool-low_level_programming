#include "main.h"

/**
 *print_most_numbers - function that prints the numbers,
 * from 0 to 9, followed by a new line.
 *
 *Return: Always 0.
 */

void print_most_numbers(void)

{
	int c;

	for (c = '0'; c <= '9'; c++)

		if (c != '2' && c != '4')
			_putchar(c);
	_putchar('\n');
}
