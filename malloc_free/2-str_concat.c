#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *str_concat - Write a function that concatenates two strings
 *@s1: contents
 *@s2: contents
 *Return: NULL if nothing and NULL if it fails
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	int len1 = 0;
	int len2 = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	concat = malloc(sizeof(char) * (len1 + len2) + 1);

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];
	for (j = 0; j < len2; j++)
		concat[len1 + j] = s2[j];

	concat[len1 + len2 + 1] = '\0';
	return (concat);
}
