#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);


/**
 * struct type - structur
 * @str: letter
 * @function: function
 */

typedef struct type
{
	char *str;
	void (*function)(va_list print);
} type;

#endif

