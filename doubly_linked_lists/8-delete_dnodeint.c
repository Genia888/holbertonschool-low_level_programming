#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at index
 * index of a dlistint_t linked list
 * @head: pointer
 * @index: index
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	dlistint_t *node;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		if (temp->next != NULL)
			temp->next->prev = NULL;

		if (*head == NULL)
			return (-1);

		*head = temp->next;
		free(temp);
		return (1);
	}
	while (temp != NULL && i < index - 1)
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL || temp->next == NULL)
		return (-1);

	node = temp->next;
	temp->next = node->next;

	if (node->next != NULL)
		node->next->prev = temp;
	free(node);
	return (1);
}
