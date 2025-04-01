#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list
 * @head: pointer to the first node
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int size = 0;
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;

	new->str = strdup(str);
	new->len = size;
	new->next = *head;
	*head = new;

return (new);
}
