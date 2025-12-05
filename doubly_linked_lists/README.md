Doubly linked lists
This directory contains a set of C functions used to manipulate a doubly linked list of type dlistint_t, defined in lists.h.

Data structure
The main structure being manipulated is:

dlistint_t: represents a node of a doubly linked list.

int n: integer value stored in the node.

struct dlistint_s *next: pointer to the next node.

struct dlistint_s *prev: pointer to the previous node.

All functions declared in lists.h operate on this structure.

Files and functions
0-print_dlistint.c
Function: size_t print_dlistint(const dlistint_t *h);

Role: traverses the list starting from h and prints the n value of each node, one integer per line, using printf.

Return: the total number of nodes printed.

1-dlistint_len.c
Function: size_t dlistint_len(const dlistint_t *h);

Role: counts the number of elements in a doubly linked list by walking through each node.

Return: the length of the list (number of nodes).

2-add_dnodeint.c
Function: dlistint_t *add_dnodeint(dlistint_t **head, const int n);

Role: creates a new node containing n and adds it at the beginning of the list. Correctly updates the prev and next pointers as well as the head pointer when needed.

Return: the address of the new node, or NULL on failure.

3-add_dnodeint_end.c
Function: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

Role: creates a new node containing n and adds it at the end of the list, by traversing the list to the last element and updating next and prev.

Return: the address of the new node, or NULL on failure.

4-free_dlistint.c
Function: void free_dlistint(dlistint_t *head);

Role: frees all memory allocated for the list by walking through each node and calling free on it.

Effect: after this function is called, all nodes of the list are freed and must not be used anymore.

5-get_dnodeint.c
Function: dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

Role: returns a pointer to the node located at position index (starting from 0) in the list, by traversing it from head.

Return: the node at the requested index, or NULL if the index is out of range.

6-sum_dlistint.c
Function: int sum_dlistint(dlistint_t *head);

Role: traverses the list and computes the sum of all n fields of the nodes.

Return: the sum of the values, or 0 if the list is empty.

7-insert_dnodeint.c
Function: dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

Role: inserts a new node containing n at position idx in the list:

if idx == 0, insertion is done at the head (similar to add_dnodeint),

otherwise, the function walks the list to the desired position and updates the prev and next pointers of neighboring nodes.

Return: the address of the new node, or NULL if insertion fails or if the index is invalid.

8-delete_dnodeint.c
Function: int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

Role: deletes the node at position index in the list, readjusting the prev and next links of neighboring nodes and freeing the removed node.

Return: 1 on success, -1 if the index is invalid or if deletion fails.

lists.h
Content:

Definition of the dlistint_t structure.

Prototypes of all list-manipulation functions.

Role: provides the public interface of the doubly linked list module, to be included with #include "lists.h" in .c files.