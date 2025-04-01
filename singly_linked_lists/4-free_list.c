#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: a pointer
 */

void free_list(list_t *head)
{
	list_t *clean;

	while (head != NULL)
	{
		clean = head->next;
		free(head->str);
		free(head);
		head = clean;
	}
}
