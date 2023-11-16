#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements in a list
 * @h: pointer to the list_t list to print elements from
 *
 * Return: the number of nodes that were printed
 */
size_t print_list(const list_t *h)
{
size_t r = 0;
while (h)
{
if (!h->str)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
h = h->next;
r++;
}
return (r);
}
