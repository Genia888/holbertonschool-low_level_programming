#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: pointer to the first node
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *end = *head;
	char *copy = strdup(str);
	int size = 0;

	if (str == NULL || new == NULL)
		return (NULL);

	while (str[size])
		size++;

	new->str = copy;
	new->len = size;
	new->next = NULL;

	if (*head)
	{
		while (end->next != NULL)
			end = end->next;
		end->next = new;
	}
	else
		*head = new;

	return (new);
}
