#include <stdio.h>
#include "lists.h"
/**
 * listint_len - Counts the elements in a linked list
 * @head: head of the linked list
 *
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *head)
{
size_t count = 0;
for (; head != NULL; head = head->next)
{
count++;
}
return (count);
}
