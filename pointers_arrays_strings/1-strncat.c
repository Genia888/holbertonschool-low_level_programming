#include "main.h"
#include <stdio.h>

/**
 *_strncat - function that concatenates two strings
 *@src: string
 *@dest:  resulting string
 *@n: byte
 *Return: a pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)

{

	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';


	return (dest);
}
