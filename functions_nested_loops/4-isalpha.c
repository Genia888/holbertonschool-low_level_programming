#include "main.h"

/**
 *_isalpha - Entry point
 *@c: caracter
 *Return: 1 if 'c' is lowercase or Always 0 (Success)
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	return (0);
}
