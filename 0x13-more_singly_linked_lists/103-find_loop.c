#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: the beginning of the linked list
 * Return: the address of the node where the loop starts/ends
 **/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *bfr, *last;
if (head == NULL)
return (NULL);
for (last = head->next; last != NULL; last = last->next)
{

for (bfr = head; bfr != last; bfr = bfr->next)
if (bfr == last->next)

return (last->next);

if (last == last->next)
return (last);
}

return (NULL);
}
