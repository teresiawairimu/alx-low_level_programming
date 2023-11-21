#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - Finds a loop in a linked list.
 * @head: Pointer to the linked list to search.
 * Return: Address of the node where the loop starts or returns, NULL if no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr, *end;

	if (head == NULL)
		return (NULL);
	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (ptr = head; ptr != end; ptr = ptr->next)
			if (ptr == end->next)
				return (end->next);
	}

	return (NULL);
}
