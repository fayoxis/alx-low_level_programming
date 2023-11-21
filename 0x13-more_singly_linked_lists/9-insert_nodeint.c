#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at a given position
 * @head: double pointer to the head of the node
 * @idx: index of the list where the node should be added
 * @n: data to be entered
 *
 * Return: address of the node, NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *act_node;
unsigned int j;
if (head)
{
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}

act_node = *head;
j = 0;
while (j < idx - 1 && act_node != NULL)
{
act_node = act_node->next;
j++;
}
if (act_node == NULL)
return (NULL);
new_node->next = act_node->next;
act_node->next = new_node;

return (new_node);
}

return (NULL);
}
