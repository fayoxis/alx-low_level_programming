#include "lists.h"
#include <stdlib.h>

/**
 * creatednode - it creates a new DLL node with datas
 * @data: this is data to add to node
 *
 * Return: returns pointer to newly allocated/populated node
 */
dlistint_t *creatednode(const int data)
{
dlistint_t *new_node = NULL;
new_node = malloc(sizeof(dlistint_t));
if (!new_node)
return (NULL);
new_node->next = NULL;
new_node->prev = NULL;
new_node->n = data;
return (new_node);
}

/**
 * insert_dnodeint_at_index - it  inserts a node at position
 * in a doubly linked list for operations
 * @head: it double pointer to the head, so we can modify if needed
 * @index:it is index to insert new node at
 * @data: it is data to add to new node
 *
 * Return: returns pointer to new element, NULL on failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head,
unsigned int index, int data)
{
dlistint_t *new_node = NULL, *current = NULL;
unsigned int i;
if (!head)
return (NULL);

new_node = creatednode(data);
if (!new_node)
return (NULL);
if (index == 0)
{
new_node->next = *head;
if (*head)
(*head)->prev = new_node;
*head = new_node;
}
else
{
current = *head;
for (i = 0; i < index - 1 && current; i++)
current = current->next;
if (i == index - 1 && current)
{
new_node->next = current->next;
new_node->prev = current;
if (current->next)
current->next->prev = new_node;
current->next = new_node;
}
else
{
free(new_node);
return (NULL);
}
}
return (new_node);
}
