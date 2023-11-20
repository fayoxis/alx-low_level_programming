#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
* delete_nodeint_at_index - ...
* @head: ...
* @index: ...
*
* Return: ...
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int j = 1;
listint_t *new_node = *head, *temp;
if (head == NULL || *head == NULL)
return (-1);

if (index == 0)
{
*head = new_node->next;
free(new_node);
return (1);
}
temp = *head;
while (temp)
{
if (j == index)
{
new_node = temp->next;

temp->next = new_node->next;
free(new_node);
return (1);
}

temp = temp->next;
j++;
}
return (-1);
}
