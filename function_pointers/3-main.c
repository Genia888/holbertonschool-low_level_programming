#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - performs simple operations
 * @argc: The argument count
 * @argv: The argument vector (array of strings)
 * Return: 0 on success
 */

int main(int argc, char *argv[])

{
	int num1, num2;
	char *op;
	int (*op_func)(int, int);

	if (argc != 4)  
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	op_func = get_op_func(op);

	if (op_func == NULL)  
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' || *op == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", op_func(num1, num2));

	return (0);
}

