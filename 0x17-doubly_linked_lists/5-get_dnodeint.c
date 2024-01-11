#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t link
 * @head: pointer to the beginning of a doubly linked list
 * @index: the index of the node
 * Return: pointer to the indexed node or Null if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL && i < index)
	{
		head = head->next;
		i++;
	}
	return (head);
}

