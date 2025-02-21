#include "main.h"

/**
 *_islower - Entry point
 *Return: 1 if c is lowercase and returns 0 otherwise(Success)
 */


int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	return (0);
}
