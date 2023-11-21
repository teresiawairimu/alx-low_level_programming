#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data in a listint_t linked list.
 * @head: Pointer to the head of the listint_t linked list.
 * Return: The sum of the data, or 0 if the list is empty.
 */

int sum_listint(listint_t *head)
{
	int total = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
