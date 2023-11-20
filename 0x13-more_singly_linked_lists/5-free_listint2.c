#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a list, sets @head NULL
 *
 * @head: double pointer to head of the list
 * Return: nothing
*/
void free_listint2(listint_t **head)
{
listint_t *temp;
if (head)
{
while (*head != NULL)
{
temp = *head;
*head = (*head)->next;
free(temp);
}

*head = NULL;
}
else
{
return;
}
free(*head);
head = 0;
}
