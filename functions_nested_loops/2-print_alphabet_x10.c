#include "main.h"

/**
 *print_alphabet_x10 - Entry point
 *Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int num = 0;
	char c;

	while (num < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		num++;
	}
}
