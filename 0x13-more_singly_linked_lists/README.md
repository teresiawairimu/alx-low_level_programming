0x13. C - More singly linked lists
==================================

-   By Teresiah Nduati

More Info
---------

Please use this data structure for this project:

```
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

```

0. Implement a function to print all elements of a listint_t list.
1. Develop a function to determine the number of elements in a linked list (listint_t).
2. Add a function to insert a new node at the beginning of a listint_t list.
3. Incorporate a function to append a new node at the end of a listint_t list.
4. Implement a function to free the memory allocated for a listint_t list.
5. Create another function to free the memory of a listint_t list (repeated for emphasis).
6. Develop a function to delete the head node of a listint_t linked list and return its data (n).
7. Implement a function to retrieve the nth node of a listint_t linked list.
8. Create a function to calculate the sum of all data (n) in a listint_t linked list.
9. Design a function to insert a new node at a specified position in the list.
10. Add a function to delete the node at a given index in a listint_t linked list.
11. Develop a function to reverse the order of a listint_t linked list.
12. Implement a function to print the elements of a listint_t linked list.
13. Create a function to find and detect loops in a listint_t linked list.
