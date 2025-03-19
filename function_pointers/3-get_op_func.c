#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - fonction  that performs simple operations
 * @s: the operator
 * @i: integer variable
 * Return: a pointer to the function
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;


	while (i < 5)
	{
		if (*(ops[i].op) == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
