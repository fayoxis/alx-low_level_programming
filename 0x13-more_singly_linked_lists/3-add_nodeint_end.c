#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - Adds a new node to the end of the list
 * @head: Pointer to the head of the linked list
 * @n: The value to add to the end of the list
 *
 * Return: The address of the new element, or NULL if failed or does not work
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node, *temp;
if (head == NULL)
return (NULL);
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
return (*head);
}
temp = *head;
while (temp->next)
{
temp = temp->next;
}
temp->next = new_node;
return (new_node);
}
