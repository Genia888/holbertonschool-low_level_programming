#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * pr_char - print characters
 * @list: list
 */

void pr_char(va_list list)

{
	printf("%c", va_arg(list, int));
}

/**
 * pr_int - print integer
 * @list: list
 */

void pr_int(va_list list)

{
	printf("%d", va_arg(list, int));
}

/**
 * pr_float - print float
 * @list: list
 */

void pr_float(va_list list)

{
	printf("%f", va_arg(list, double));
}

/**
 * pr_string - print string
 * @list: list
 */

void pr_string(va_list list)

{
	char *s;

	s = va_arg(list, char*);

	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}

/**
 * print_all - fucntion that print any type of character
 * @format: list of format checked
 */

void print_all(const char * const format, ...)

{
	type form[] = {
		{"c", pr_char},
		{"i", pr_int},
		{"f", pr_float},
		{"s", pr_string},
	};

	va_list args;
	unsigned int i = 0;
	unsigned int x = 0;
	char *separator;

	va_start(args, format);
	separator = "";

	while (format != NULL && format[i] != '\0')
	{
		while (x < 4)
		{
			if (format[i] == form[x].str[0])
			{
				printf("%s", separator);
				form[x].function(args);
				separator = ", ";
			}
			x++;
		}
		x = 0;
		i++;
	}
	printf("\n");
	va_end(args);
}
