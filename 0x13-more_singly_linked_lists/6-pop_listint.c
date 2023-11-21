#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list.
 * @head: Pointer to the head of the list.
 * Return: The data of the deleted node.
 */

int pop_listint(listint_t **head)
{
listint_t *removed;
int content;

if (*head == NULL)
return (0);

removed = *head;
content = removed->n;
free(removed);

*head = (*head)->next;
return (content);

}
