#include <stdlib.h>
#include "lists.h"

/**
* reverse_listint - ...
* @head: ...
*
* Return: ...
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev_node = NULL, *this_node;
if (head)
{
while (*head != NULL)
{
this_node = (*head)->next;
(*head)->next = prev_node;
prev_node = *head;
*head = this_node;
}
*head = prev_node;
return (*head);
}
return (NULL);
}
