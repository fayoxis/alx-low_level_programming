#include <stdlib.h>
#include "lists.h"
/**
* free_listint - Frees linked-list
* @head: head of the linked-list
*
* Return: Nothing or null
*/
void free_listint(listint_t *head)
{
listint_t *temp;
while (head != NULL)
{
temp = head;
head = head->next;
free(temp);
}
free(head);
}
