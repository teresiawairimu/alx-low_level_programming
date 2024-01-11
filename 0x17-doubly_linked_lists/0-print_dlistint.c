#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all elements of the list
 * @h: indicates the head of the doubly linked list
 * Return: The number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t number_of_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		number_of_nodes++;
	}
	return (number_of_nodes);
}
