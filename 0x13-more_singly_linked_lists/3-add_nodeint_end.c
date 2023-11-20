#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
* add_nodeint_end - Adds a new node to the end of the list
* @head: head of the linked list
* @n: The val to add to the end of the list
*
* Return: The address of the new element, or NULL it failed or does not work
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *next_node, *temp;

if (head)
{
next_node = malloc(sizeof(listint_t));
if (next_node == NULL)
return (NULL);
next_node->next = NULL;
next_node->n = n;


if (*head == NULL)
{
*head = next_node;
return (*head);
}
else
{
temp = *head;
while (temp->next)
temp = temp->next;
temp->next = next_node;
return (temp);
}
}
return (NULL);
}
