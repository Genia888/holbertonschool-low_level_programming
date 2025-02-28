#include "main.h"
#include <stdio.h>

/**
 *print_array - Write a function that prints n elements
 *of an array of integers,
 *followed by a new line
 *@a:number
 *@n:number
 *Return: Always 0.
 */

void print_array(int *a, int n)

{
	int p;

	p = 0;
	while (p < n)
	{
		printf("%d", a[p]);
		p++;
		if (p != n)
		{
			printf(", ");
		}
	}
	printf("\n");
}
