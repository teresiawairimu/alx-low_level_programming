#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - prints the number of elements in the doubly linked list
 * @h: the head of the list
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t number_of_elements = 0;

	while (h != NULL)
	{
		number_of_elements++;
		h = h->next;
	}
	return (number_of_elements);
}
