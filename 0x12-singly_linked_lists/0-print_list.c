#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements
 * @h: pointer to the list_t list to print element
 *
 * Return: the number of nodes that is printed
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
