#include "lists.h"

/**
 * free_listint_safe - Safely frees a listint_t linked list.
 * @h: The head of the list.
 * Description: This function frees a linked list in a safe manner.
 * Section header: The header of this function is lists.h.
 * Return: The size of the list.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp, *actual;
	size_t i;
	int rest;

	i = 0, actual = *h;

	while (actual)
	{
		rest = actual - actual->next;
		if (rest > 0)
		{
			tmp = actual->next;
			free(actual);
			actual = tmp;
			i++;
		} else
		{
			free(actual);
			*h = NULL;
			i++;
			break;
		}

	}

	*h = NULL;

	return (i);
}
