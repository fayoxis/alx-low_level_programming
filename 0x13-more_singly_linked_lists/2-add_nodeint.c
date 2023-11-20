#include <stdlib.h>
#include "lists.h"

/**
* add_nodeint - Adds a new node at the beginning of the list
* @head: head of the linked-list or beginning of the linked=list
* @n: value to be added to the new node
*
* Return: Address of new element, or NULL it failed or does not work
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;
new_node = malloc(sizeof(listint_t));
if (head != NULL)
{
if (new_node == NULL)
return (NULL);
new_node->next = *head;
new_node->n = n;
*head = new_node;

return (new_node);
}

return (NULL);
}

