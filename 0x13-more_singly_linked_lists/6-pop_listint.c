#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - delete head node of a list then returns its data
 * @head: head node of the list
 *
 * Return: data of head node, or 0 if empty or null
 */

int pop_listint(listint_t **head)
{
int y = 0;
listint_t *temp;

if (*head == NULL)
return (0);
temp = *head;
y = (*head)->n;
*head = temp->next;
free(temp);

return (y);
}
