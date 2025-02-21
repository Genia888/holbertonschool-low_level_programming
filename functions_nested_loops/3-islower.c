#include "main.h"

/**
 *_islower - Entry point
 *@c: caracter
 *Return: 1 if 'c' is lowercase or Always 0 (Success)
 */


int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	return (0);
}
