#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Displays the count of elements in a linked list
 * @h: Pointer to the initial node of the linked list
 * Return: size_t, the number of nodes in the linked list
 */

size_t list_len(const list_t *h)
{
	size_t num_of_nodes = 0;

	while (h)
	{
		h = h->next;
		num_of_nodes++;
	}

	return (num_of_nodes);
}
