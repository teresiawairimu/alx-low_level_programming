#include "lists.h"

/**
 * add_node_end - Inserts a new node at the end of a list.
 * @head: Pointer to the first node of a list.
 * @str: Pointer to the string to be inserted into the new node.
 * Return: Pointer to the new node.
 **/
list_t *add_node_end(list_t **head, const char *str)
{
    if (str == NULL)
        return (NULL);

    list_t *new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return (NULL);

    new_node->str = strdup(str);
    if (new_node->str == NULL)
    {
        free(new_node);
        return (NULL);
    }

    unsigned int length = 0;
    while (str[length])
        length++;

    new_node->len = length;
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
        return (new_node);
    }

    list_t *current_node = *head;
    while (current_node->next)
        current_node = current_node->next;

    current_node->next = new_node;
    return (new_node);
}
