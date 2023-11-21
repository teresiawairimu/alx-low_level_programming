#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index in a listint_t linked list.
 * @head: Double pointer to the head of the listint_t linked list.
 * @index: The index of the node to be deleted.
 * Return: 1 if deletion succeeded,
 * or -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current_element = *head, *temp;

	if (!current_element)
		return (-1);

	if (index == 0)
	{
		*head = current_element->next;
		free(current_element);

		return (1);
	}

	while (current_element->next && ((i + 1) != index))
	{
		current_element = current_element->next;
		i++;
	}

	if ((i + 1) == index && current_element->next)
	{
		temp = current_element->next;
		current_element->next = temp->next;
		free(temp);

		return (1);
	}

	return (-1);
}
