#include "main.h"
#include <stdio.h>

/**
 *print_chessboard - Write a function that prints the chessboard.
 *@a: string
 *Return : Always 0
 */

void print_chessboard(char (*a)[8])
{
	int i, b;

	for (i = 0; i < 8; i++)
	{

		for (b = 0; b < 8; b++)
		{
			_putchar (*(*(a + i) + b));
		}
		_putchar ('\n');
	}
}
