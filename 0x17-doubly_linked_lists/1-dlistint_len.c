#include "lists.h"

/**
 * dlistint_len - returns the length of a doubly linked list
 * @head: head of the doubly linked list (DLL)
 *
 * Return: the number of nodes in the DLL
 */
size_t dlistint_len(const dlistint_t *head)
{
size_t count = 0;
const dlistint_t *current;
for (current = head; current != NULL; current = current->next)
{
count++;
}
return (count);
}
