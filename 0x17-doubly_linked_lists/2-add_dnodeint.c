#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of the dlistint list
 * @head: a pointer to the pointer of the head of the doubly linked list
 * @n: the data that will be stored in the doubly linked list
 * Return: the pointer to the new node, or NULL if a failure occurs
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;
	return (new_node);
}

