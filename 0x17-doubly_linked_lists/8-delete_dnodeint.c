#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deleted the node at index of a dlistint_t list
 * @head: pointer to the pointer of the beginning of the doubly linked list
 * @index: the position of the node that should be deleted
 * Return: 1 succeeded, -1 if it fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	current_node = *head;
	if (index == 0)
	{
		*head = current_node->next;
		if (current_node->next != NULL)
		{
			current_node->next->prev = NULL;
		}
		free(current_node);
		return (-1);
	}
	while (i < index && current_node != NULL)
	{
		current_node = current_node->next;
		i++;
	}
	current_node->prev->next = current_node->next;
	if (current_node->next != NULL)
	{
		current_node->next->prev = current_node->prev;
	}
	free(current_node);
	return (1);
}
