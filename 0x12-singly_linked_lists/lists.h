#ifndef SINGLY_LINKED_LIST_H_
#define SINGLY_LINKED_LIST_H_
#include <stdlib.h>
#include <unistd.h>
/**
 * struct list_s - Definition of a singly linked list node
 * @str: A dynamically allocated string
 * @len: The length of the string
 * @next: Pointer to the next node in the list
 *
 * Description: This structure defines a node in a singly linked list.
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif /* #ifndef SINGLY_LINKED_LIST_H_ */
