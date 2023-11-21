#include "lists.h"
#include <stdio.h>


/**
 * find_listint_loop - Finds the loop in a linked listint_t linked list.
 * @head: Pointer to the head of the listint_t list to check for a loop.
 *
 * Return: If the list is not looped, returns NULL.
 * Otherwise, returns a pointer to the node where the loop starts.
 **/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *bfr, *last;
if (head == NULL)
return (NULL);
for (last = head->next; last != NULL; last = last->next)
{
if (last == last->next)
return (last);
for (bfr = head; bfr != last; bfr = bfr->next)
if (bfr == last->next)
return (last->next);
}
return (NULL);
}


/**
 * print_listint_safe - Safely prints a listint_t linked list.
 * @head: Pointer to the head of the listint_t list to be printed.
 *
 * Return: Number of nodes in the list.
 **/
size_t print_listint_safe(const listint_t *head)
{
size_t len = 0;
int l;
listint_t *l_node;

l_node = find_listint_loop((listint_t *) head);
for (len = 0, l = 1; (head != l_node || l) && head != NULL; len++)
{
printf("[%p] %d\n", (void *) head, head->n);
if (head == l_node)
l = 0;
head = head->next;
}
if (l_node != NULL)
printf("-> [%p] %d\n", (void *) head, head->n);
return (len);
}
