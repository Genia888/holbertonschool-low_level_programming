#include "main.h"
#include <stdio.h>

/**
 *_memcpy - Write a function that copies memory area.
 *@src: memory area
 *@dest: memory area
 *@n: bites.
 *Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int b;
	int a;

	a = 0;
	b = 0;
	while (n--)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);
}
