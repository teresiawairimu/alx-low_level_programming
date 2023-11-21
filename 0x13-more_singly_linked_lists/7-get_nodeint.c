#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Retrieves the nth node in a listint_t linked list.
 * @head: Pointer to the first/head of the listint_t linked list.
 * @index: Index of the node to be returned.
 * Return: The nth node of the listint_t linked list, or
 * NULL if the node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp = head;

	while (temp && (count < index))
	{
		temp = temp->next;
		count++;
	}

	if (count < index)
		return (NULL);

	return (temp);
}
