#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct list_s - Definition of a singly linked list node
 * @str: A dynamically allocated string
 * @len: The length of the string
 * @next: Pointer to the next node in the list
 *
 * Description: Defines a node in a singly linked list.
 */
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);



#endif
