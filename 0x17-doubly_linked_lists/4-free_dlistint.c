#include "lists.h"

/**
 * free_dlistint - it frees a doubly linked list for usuage
 * @head: it is pointer to head of doubly linked list to free
 *
 * Return: always return void
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *current;
for (current = head; current != NULL; current = head)
{
head = head->next;
free(current);
}
}
