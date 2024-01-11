#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - ads a new nde at the end of the dlistint_t list
 * @head: a pointer to a pointer to the head of a doubly linked list
 * @n: the data that is stored in the new node
 * Return: address of the new element or NULL if it fails
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	temp_node = *head;
	while (temp_node->next != NULL)
	{
		temp_node = temp_node->next;
	}
	temp_node->next = new_node;
	new_node->prev = temp_node;
	return (new_node);
}
