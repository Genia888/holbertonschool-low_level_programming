#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)

{
	char hexadecimal;


	for (hexadecimal = 48; hexadecimal <= 57; hexadecimal++)
	putchar(hexadecimal);

	for (hexadecimal = 97; hexadecimal <= 102; hexadecimal++)
	putchar (hexadecimal);

	putchar ('\n');

	return (0);

}

