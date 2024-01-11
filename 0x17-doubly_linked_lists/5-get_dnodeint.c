#include "lists.h"

/**
 * get_dnodeint_at_index - Retrieves a doubly linked
 * list node at a given index.
 * @head: Pointer to the head of the doubly linked
 * list to search through.
 * @index: Index of the node to retrieve.
 *
 * Return: Pointer to the node if found, otherwise NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i;

for (i = 0; head != NULL && i < index; i++)
{
head = head->next;
}
return (head);
}
