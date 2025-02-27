#include "main.h"
#include <stdio.h>

/**
 *rev_string - Write a function that reverses a string.
 *@s: text
 *Return: Always 0.
 */

void rev_string(char *s)

{
	int y = 0;
	int x = 0;

	while (s[y] != '\0')
	{
		y++;
	}
	y--;
	while (x < y)


	{

		char temp = s[x];

		s[x] = s[y];
		s[y] = temp;


		x++;
		y--;
	}
}
