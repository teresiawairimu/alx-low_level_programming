#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Inserts a new node at the beginning of a list_t list
 * @new_head: Address of the new node
 * @str: Data for the new node
 * Return: Address of the newly added element, NULL if unsuccessful
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head_ptr = malloc(sizeof(list_t));

	
	unsigned int length = strlen(str);


	if (*head == NULL)
	{
		return (NULL);
	}
	else
	{
		new_head_ptr->str = strdup(str);
		new_head_ptr->len = length;
		new_head_ptr->next = *head;
		*head = new_head_ptr;
	}

	return (*head);
}
