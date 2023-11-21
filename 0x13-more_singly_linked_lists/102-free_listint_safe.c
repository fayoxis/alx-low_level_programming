#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @head: pointer to the first node in the linked list
 *
 * Return: Number of elements in the freed list
 **/
size_t free_listint_safe(listint_t **head)
{
int diff;
size_t count = 0;
listint_t *current, *next;

if (!head || !*head)
return (0);

current = *head;
while (current != NULL)
{
diff = current - current->next;
if (diff > 0)
{
next = current->next;
free(current);
current = next;
count++;
}
else
{
free(current);
count++;
break;
}
}
*head = NULL;
return (count);
}
