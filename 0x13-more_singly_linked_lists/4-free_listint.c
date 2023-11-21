#include "lists.h"

/**
 * free_listint - Frees the memory of a listint_t linked list.
 * @head: Pointer to the head/first node of the list.
 */

void free_listint(listint_t *head)
{
	listint_t *placeholder;

	while (head)
	{
		placeholder = head->next;
		free(head);
		head = placeholder;
	}
}
