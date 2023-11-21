#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a given index in a linked list.
 * @head: A pointer to the head of the linked list.
 * @index: The index of the node to be deleted.
 *
 * Return: 1 if successful, -1 otherwise.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
if (head == NULL || *head == NULL)
return (-1);

if (index == 0)
{
listint_t *temp = *head;
*head = (*head)->next;
free(temp);
return (1);
}
listint_t *current_node = *head;

for (unsigned int position = 0; current_node != NULL; position++)
{
if (position + 1 == index)
{
listint_t *next_node = current_node->next;
if (next_node == NULL)
return (-1);
            
current_node->next = next_node->next;
free(next_node);
return (1);
}

current_node = current_node->next;
}

return (-1);
}
