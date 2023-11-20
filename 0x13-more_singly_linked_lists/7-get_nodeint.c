#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
* get_nodeint_at_index - returns the node of the linked-list
* @head: beginning of the list
* @index:  the index
*
* Return: ... the answer
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *node = head;
unsigned int j = 0;
if (node)
{
while (node)
{
if (j == index)
return (node);

node = node->next;
j++;
}
}
return (NULL);
}
