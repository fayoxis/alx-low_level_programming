#include "lists.h"

/**
 * free_listint_safe - it frees the  linked-list
 * @head: point to the first-node in a linked-list that is begining list
 *
 * Return: N of elements in the freed-list
 */
size_t free_listint_safe(listint_t **head)
{
int ascer;
size_t l = 0;
listint_t *temp;

if (!head || !*head)
return (0);

while (*head)
{
ascer = *head - (*head)->next;
if (ascer > 0)
{
temp = (*head)->next;
free(*head);
*head = temp;
l++;
}
else
{

free(*head);
*head = NULL;

l++;
break;
}
}
*head = NULL;
return (l);
}

