#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - returns the node of the
 * linked list at the specified index
 * @head: beginning of the list
 * @index: the index
 *
 * Return: the node at the specified index, or NULL if not found
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *node = head;
for (unsigned int j = 0; node != NULL; j++, node = node->next)
{
if (j == index)
return (node);
}
return (NULL);
}
