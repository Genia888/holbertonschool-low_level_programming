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
	int sign;
	unsigned int num;
	char *temp;

	temp = s;
	num = 0;
	sign = 1;
	while (*temp != '\0' && (*temp < '0' || *temp > '9'))
	{
		if (*temp == '-')
			sign *= -1;
		temp++;
	}
	if (*temp != '\0')
	{
		do {
			num = num * 10 + (*temp - '0');
			temp++;
		} while (*temp >= '0' && *temp <= '9');
	}
	return (num * sign);
}
