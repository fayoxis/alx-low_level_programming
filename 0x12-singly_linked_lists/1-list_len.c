#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in your code
 * @h: pointer to the list_t list
 *
 * Return: number of elements in h in list
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
