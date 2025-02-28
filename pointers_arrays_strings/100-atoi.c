#include "main.h"
#include <stdio.h>

/**
 *_atoi - convert a string representation of an integer to an integer
 *
 *@s: string possibly containing an integer
 *
 *Return: first integer in string
 */


int _atoi(char *s)
{
	int sign = 1;
	int sum = 0;


	while (*s == ' ' || *s == '\t') s++;
	if (*s == '-') 

	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}


	while (*s >= '0' && *s <= '9') 
	{
		sum = sum * 10 + (*s - '0');
		s++;
	}

	return sign * sum;
}
