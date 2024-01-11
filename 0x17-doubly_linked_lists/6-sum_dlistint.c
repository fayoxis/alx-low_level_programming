#include "lists.h"

/**
 * sum_dlistint - Calculates the sum of all
 * elements in a doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 * Return: The sum of all elements in the doubly linked list.
 * Returns 0 if the doubly linked list is NULL.
 */
int sum_dlistint(dlistint_t *head)
{
int totalSum = 0;
dlistint_t *current;
for (current = head; current != NULL; current = current->next)
{
totalSum += current->n;
}
return (totalSum);
}
