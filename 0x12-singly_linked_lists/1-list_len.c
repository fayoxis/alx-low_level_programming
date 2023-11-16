#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Returns the number of elements in a list.
 * @h: Pointer to the list_t list.
 *
 * Return: The number of elements in the list.
 */

size_t list_len(const list_t *h)
{
size_t wh = 0;
while (h)
{
wh++;
h = h->next;
}
return (wh);
}
