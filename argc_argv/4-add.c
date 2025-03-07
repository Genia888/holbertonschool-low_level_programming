#include <stdio.h>
#include <stdlib.h>

/**
 *main - Sum two numbers
 *@argc: numbers of arguments
 *@argv: arguments
 *Return: 0 to succes.
 */

int main(int argc, char *argv[])
{
	int a = 0, b, i;

	for (b = 1; b < argc; b++)
	{
		for (i = 0; argv[b][i]; i++)
		{
			if (argv[b][i] < '0' || argv[b][i] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		a += atoi(argv[b]);
	}
	printf("%d\n", a);
	return (0);
}
