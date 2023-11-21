#include "lists.h"

/**
 * print_listint_safe - Safely prints a linked list of type listint_t.
 * @head: Pointer to the list to print.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	long int var;

	while (head)
	{
		var = head - head->next;
		num++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (var > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (num);
}
