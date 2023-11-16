#include "lists.h"

/**
 * add_node - Inserts a new node at the beginning of a list
 * @head: Pointer to the head of the list
 * @str: String to be added
 *
 * Return: Returns the address of the new element or NULL if failed
 */

/*
1. Allocate memory for a new node.
2. If the memory allocation fails, return NULL.
3. Copy the string into a new buffer.
4. If the string copy fails, free the new node and return NULL.
5. Calculate the length of the string.
6. Set the new node’s next pointer to point to the current head of the list.
7. Update the head of the list to point to the new node.
8. Return a pointer to the new node.
*/
list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

	new->str = dup;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);

}
