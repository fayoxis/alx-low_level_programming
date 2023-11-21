#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of the list
 * @head: Pointer to the head of the linked-list or the beginning of the linked-list
 * @node: Value to be added to the new node
 *
 * Return: Address of the new element, or NULL if it failed or does not work
 */
listint_t *add_nodeint(listint_t **head, const int node)
{
listint_t *new_node;
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->node = node;
new_node->next = *head;
*head = new_node;
return (new_node);
}
