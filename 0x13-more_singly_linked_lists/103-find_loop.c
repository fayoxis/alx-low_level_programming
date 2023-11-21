#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: the beginning of the linked list
 * Return: the address of the node where the loop starts/ends
 **/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *bfr = head;
listint_t *last = head->next;
while (last != NULL)
{
while (bfr != last)
{
if (bfr == last->next)
return (last->next);
bfr = bfr->next;
}
if (last == last->next)
return (last);
last = last->next;
}
return (NULL);
}
