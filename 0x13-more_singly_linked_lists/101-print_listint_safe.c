#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Safely prints a listint_t linked list.
 * @head: Pointer to the head of the listint_t list to be printed.
 *
 * Return: Number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
size_t len = 0;
int loop_found = 0;
listint_t *loop_node = find_listint_loop((listint_t *)head);
while (1)
{
printf("[%p] %d\n", (void *)head, head->n);
len++;
if (head == loop_node)
{
if (loop_found)
break;
loop_found = 1;
}

if (head->next == NULL)
break;
head = head->next;
}
if (loop_node != NULL)
printf("-> [%p] %d\n", (void *)head->next, head->next->n);
return (len);
}

/**
 * find_listint_loop - Finds the loop in a linked listint_t linked list.
 * @head: Pointer to the head of the listint_t list to check for a loop.
 *
 * Return: If the list is not looped, returns NULL.
 * Otherwise, returns a pointer to the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow = head;
listint_t *fast = head;

while (fast && fast->next)
{
slow = slow->next;
fast = fast->next->next;
if (slow == fast)
{
slow = head;
while (slow != fast)
{
slow = slow->next;
fast = fast->next;
}
return (slow);
}
}
return (NULL);
}
