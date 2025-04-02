#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list
 * @head : pointer
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *clean;

	while (head)
	{
		clean = head->next;
		free(head);
		head = clean;
	}
}
