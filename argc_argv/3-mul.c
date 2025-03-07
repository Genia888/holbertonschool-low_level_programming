#include <stdio.h>
#include <stdlib.h>

/**
 *main - function that multiplies two numbers.
 *Return: 0.
 *@argv: string
 *@argc: number of argument
 */

int main(int argc, char *argv[])
{
	int a;
	int result;
	int b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		result = a * b;
		printf("%d\n", result);
	}
	return (0);
}
