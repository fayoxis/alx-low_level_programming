#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a linked list and sets the head pointer to NULL.
 *
 * This function frees all the nodes in a linked list pointed to by the
 * double pointer `head`. It iterates through the list, deallocating each
 * node using the `free` function, and updates the `head` pointer to NULL
 * to indicate an empty list.
 * @head: Double pointer to the head of the linked list.
 **/
void free_listint2(listint_t **head)
{
listint_t *current, *temp;
if (head == NULL)
return;
current = *head;
while (current != NULL)
{
temp = current;
current = current->next;
free(temp);
}
*head = NULL;
}
