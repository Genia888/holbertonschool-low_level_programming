#include <stdio.h>
#include <stdlib.h>

/**
 *char *string_nconcat - function that concatenates two strings.
 *@n: bytes of s2
 *@s1: pointer
 *@s2: pointer
 *Return: Always 0.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int a;
	unsigned int len1;
	unsigned int len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
		;
	ptr = malloc(sizeof(char) * (a + n + 1));
	if (ptr == NULL)
		return (NULL);
	for (len1 = 0; s1[len1] != '\0'; len1++)
		ptr[len1] = s1[len1];
	for (len2 = 0; len2 < n; len2++, len1++)
		ptr[len1] = s2[len2];
	ptr[len1] = '\0';
	return (ptr);
}
