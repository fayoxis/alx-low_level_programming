#include "lists.h"
#include <stdlib.h>

/**
 * create_dnode - Creates a new doubly linked list node with data.
 * @data: The data to add to the node.
 *
 * Return: A pointer to the newly allocated/populated node.
 */
dlistint_t *create_dnode(const int data)
{
dlistint_t *new_node = malloc(sizeof(dlistint_t));
if (!new_node)
return (NULL);

new_node->next = NULL;
new_node->prev = NULL;
new_node->n = data;
return (new_node);
}

/**
 * add_dnodeint_end - Adds a node to the end of a doubly linked list.
 * @head: A double pointer to the head of the list.
 * @data: The data to add to the new node.
 *
 * Return: A pointer to the new element, or NULL on failure.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int data)
{
dlistint_t *new_node = create_dnode(data);
if (!new_node)
return (NULL);
if (*head == NULL) /* Empty DLL */
{
*head = new_node;
return (new_node);
}
else /* DLL exists */
{
dlistint_t *temp = *head;
do {
if (temp->next == NULL) /* Reached the end of the DLL */
{
new_node->prev = temp;
temp->next = new_node;
return (new_node);
}
temp = temp->next;
} while (temp != NULL);
}
/* This line should never be reached; it is here for the compiler's sake */
return (NULL);
}
