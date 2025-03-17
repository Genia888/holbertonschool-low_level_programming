#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @f: pointer
 * @name: name
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
