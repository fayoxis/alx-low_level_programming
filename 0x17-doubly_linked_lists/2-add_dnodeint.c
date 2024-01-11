#include "lists.h"
#include <stdlib.h>

/**
 * create_node - Creates a new node for a doubly
 * linked list with the given data.
 * @data: The data to add to the node.
 * Return: A pointer to the newly allocated and populated node.
 */
dlistint_t *create_node(const int data)
{
    dlistint_t *newNode = NULL;

    newNode = malloc(sizeof(dlistint_t));
    if (!newNode)
        return (NULL);

    newNode->next = NULL;
    newNode->prev = NULL;
    newNode->n = data;

    return (newNode);
}

/**
 * add_dnodeint - Adds a new node with the given data
 * to the head of a doubly linked list.
 * @head: A double pointer to the head of the list.
 * @data: The data to add to the new node.
 * Return: A pointer to the new element, or NULL on failure.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int data)
{
dlistint_t *newNode = NULL, *temp = NULL;

newNode = create_node(data);
if (!newNode)
return (NULL);

if (!head) /* Invalid head pointer */
return (NULL);

if (!(*head)) /* Empty DLL */
{
*head = newNode;
return (newNode);
}

temp = *head;
while (temp->prev != NULL) /* Traverse to the first node */
temp = temp->prev;

temp->prev = newNode;
newNode->next = temp;
*head = newNode;
return (newNode);
}
