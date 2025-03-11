#include <stdio.h>
#include <stdlib.h>

/**
 *malloc_checked - function that allocates memory using malloc
 *@b: size
 *Return: exit 98 or return alloc
 */

void *malloc_checked(unsigned int b)
{
	void *alloc = malloc(b);

	if (b > 0)
	{
		if (alloc == 0)
			exit(98);
		return (alloc);
	}
	exit(98);
}
