#include "lists.h"

/**
 * free_listint2 - Frees the memory of a listint_t linked list.
 * @head: Double pointer to the head/first node of the list.
 * Return: Nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *place_holder;

	if (head)
	{
		while (*head)
		{
			place_holder = *head;
			*head = place_holder->next;
			free(place_holder);
		}
	}
}
