#include "main.h"
#include <stdio.h>

/**
 *_strcpy - Write a function that copies the string pointed to by src,
 *including the terminating null byte (\0),
 *to the buffer pointed to by dest
 *@src: number
 *@dest: number
 *Return: dest.
 */

char *_strcpy(char *dest, char *src)

{
	int n = 0;

	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	return (dest);
}
