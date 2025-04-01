#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * dlistint_len - eturns the number of elements in a linked dlistint_t list
 * @h: linked lists
 * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
