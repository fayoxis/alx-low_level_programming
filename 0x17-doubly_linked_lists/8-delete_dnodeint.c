#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes a node at a given index
 * in a doubly linked list
 * @head: double pointer to the head of the list
 * @index: index of the node to delete
 *
 * Return: 1 if successful, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current = NULL;
unsigned int count;
if (!head || !(*head)) /* If the list is empty */
{
return (-1);
}
current = *head;
for (count = 0; count < index && current; count++)
{
current = current->next;
}
if (!current) /* If the end of the list is reached */
return (-1);
if (current->next)
current->next->prev = current->prev;
if (index == 0) /* If deleting the head node */
*head = current->next;
else
current->prev->next = current->next;
free(current);
return (1);
}
