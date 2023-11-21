#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at a given index in a linked list.
 * @head: A pointer to the head of the linked list.
 * @index: The index of the node to be deleted.
 *
 * Return: 1 if successful, -1 otherwise.
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int position = 0;
listint_t *current_node = *head;
listint_t *previous_node = NULL;

if (head == NULL || *head == NULL)
return (-1);

if (index == 0)
{
*head = current_node->next;
free(current_node);
return (1);
}

while (current_node != NULL)
{
if (position == index)
{
previous_node->next = current_node->next;
free(current_node);
return (1);
}

previous_node = current_node;
current_node = current_node->next;
position++;
}

return (-1);
}
