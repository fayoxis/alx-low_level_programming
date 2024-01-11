#include "lists.h"
#include <stdio.h>

/**
 * print_doubly_linked_list - Prints the values of a doubly linked list
 * @head: Head of the doubly linked list
 *
 * Return: The number of nodes in the doubly linked list
 */
size_t print_dlistint(const dlistint_t *head)
{
	size_t node_count = 0;
	const dlistint_t *current_node = head;

	while (current_node != NULL)
	{
		printf("%d\n", current_node->n);
		current_node = current_node->next;
		node_count++;
	}

	return (node_count);
}
