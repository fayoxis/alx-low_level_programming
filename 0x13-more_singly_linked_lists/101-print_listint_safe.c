#include "lists.h"
#include <stdio.h>


/**
 * print_listint_safe - safely Print listint_t-list .
 * @head: pointer to a head of the listint_t list that safely printed.
 *
 * Return: number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
size_t len = 0;
int l;
listint_t *l_node;

l_node = find_listint_loop((listint_t *) head);
for (len = 0, l = 1; (head != l_node || l) && head != NULL; len++)
{
printf("[%p] %d\n", (void *) head, head->n);
if (head == l_node)
l = 0;
head = head->next;
}
if (l_node != NULL)
printf("-> [%p] %d\n", (void *) head, head->n);
return (len);
}

/**
 * find_listint_loop - find theloop in a linked-list that is unique
 *in looped listint_t linked-list.
 * @head: pointer to head of the listint_t to check the valve
 *
 * Return: when  list is not looped - 0.
 * Otherwise -  number of instinct nodes in the list.
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *bfr, *last;
if (head == NULL)
return (NULL);
for (last = head->next; last != NULL; last = last->next)
{
if (last == last->next)

return (last);
for (bfr = head; bfr != last; bfr = bfr->next)
if (bfr == last->next)
return (last->next);
}
return (NULL);
}
