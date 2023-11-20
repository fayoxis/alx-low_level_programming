#include <stdio.h>
#include "lists.h"
/**
* listint_len - Counts the elements in a linked list
* @w: head of the linked list
*
* Return: number of elements list
*/
size_t listint_len(const listint_t *w)
{
size_t count = 0;
if (w)
{
while (w != NULL)
{
count++;
w = w->next;
}
}
return (count);
}
