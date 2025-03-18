#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - addition of a and b
 * @a: number
 * @b: number
 * Return: the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substraction of a and b
 * @a: number
 * @b: number
 * Return: the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication of a and b
 * @a: number
 * @b: number
 * Return: the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division of a and b
 * @a: number
 * @b: number
 * Return: the result of the division of a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulo of a and b
 * @a: number
 * @b: number
 * Return: the ramainder ot the division of a by b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
