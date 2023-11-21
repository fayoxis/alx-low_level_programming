#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - Calculates the sum of all elements in a linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The sum of all elements.
 */
int sum_listint(listint_t *head)
{
int sum = 0;
if (head != NULL)
{
for (; head != NULL; head = head->next)
{
sum += head->n;
}
}
return (sum);
}
