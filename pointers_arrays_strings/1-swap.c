#include "main.h"
#include <stdio.h>

/**
 *swap_int - Write a function that swaps the values of two integers
 *@a : number
 *@b : number
 *Return: Always 0.
 */



void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
