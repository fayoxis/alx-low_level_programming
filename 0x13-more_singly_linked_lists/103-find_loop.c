#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - it find the loop in a linked-list
 *
 * @head: beginig of linked-list
 *
 * Return: address the  node where loop starts/ends
 */
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
