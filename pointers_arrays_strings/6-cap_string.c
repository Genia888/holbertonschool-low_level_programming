#include "main.h"
#include <stdio.h>

/**
 *cap_string - Write a function that capitalizes all words of a string
 *@s: the string
 *Return: s
 */

char *cap_string(char *s)
{
	int c = 0;

	while (s[c])
	{
		while (!(s[c] >= 'a' && s[c] <= 'z'))
			c++;

		if (s[c - 1] == ',' ||
				s[c - 1] == ' ' ||
				s[c - 1] == '\t' ||
				s[c - 1] == '\n' ||
				s[c - 1] == ';' ||
				s[c - 1] == '.' ||
				s[c - 1] == '!' ||
				s[c - 1] == '?' ||
				s[c - 1] == '"' ||
				s[c - 1] == '(' ||
				s[c - 1] == ')' ||
				s[c - 1] == '{' ||
				s[c - 1] == '}' ||
				c == 0)
			s[c] = s[c] - 32;
		c++;
	}
	return (s);
}
