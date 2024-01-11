#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - returns sum of all the data of the dlistint_t list
 * @head: pointer to the beginning of the list
 * Return: sum of the data or 0 if the doubly linked list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
