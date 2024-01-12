#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the pointer to the beginning of the doubly linked list
 * @idx:index of the list where the new node should be added
 * @n: the data
 * Return: address of the new node or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current_node, *next_node;
	unsigned int i;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (idx != 0)
	{
		current_node = *h;
		for (i = 0; i < idx - 1 && current_node != NULL; i++)
		{
			current_node = current_node->next;
		}
		if (current_node == NULL)
		{
			return (NULL);
		}
	}
	if (idx == 0)
	{
		next_node = *h;
		*h = new_node;
		new_node->prev = NULL;
	}
	else
	{
		new_node->prev = current_node;
		next_node = current_node->next;
		current_node->next = new_node;
	}
	new_node->next = next_node;
	if (new_node->next != NULL)
	{
		new_node->next->prev = new_node;
	}
	return (new_node);
}

