#include "main.h"
#include <stdio.h>

/**
 *_strstr - Write function that locates a substring.
 *@haystack: string
 *@needle: character
 *
 *Return: NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int h;
	int n;

	h = 0;
	while (haystack[h] != '\0')
	{
		n = 0;
		while (needle[n] == haystack[h + n])
			n++;
		if (needle[n] == '\0')
			return (haystack + h);
		h++;
	}
	return (NULL);
}
