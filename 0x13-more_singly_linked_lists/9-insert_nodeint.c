#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
* insert_nodeint_at_index - inserts a node at  given position
* @head: double pointer to the head of node
* @idx: index of list where the node should be adde
* @n: ...data to enter
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
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = *head;
*head = new_node;
return (new_node);
}
act_node = *head;
for (j = 0; j < idx - 1 && act_node != NULL; j++)
act_node = act_node->next;
if (act_node == NULL)
return (NULL);
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = act_node->next;
act_node->next = new_node;
return (new_node);
}
return (NULL);
}
