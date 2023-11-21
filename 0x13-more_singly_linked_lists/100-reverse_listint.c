#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - Reverses a singly linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: Pointer to the new head of the reversed list.
 **/
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev_node = NULL;
listint_t *current_node = *head;
listint_t *next_node = NULL;

while (current_node != NULL)
{
next_node = current_node->next;
current_node->next = prev_node;
prev_node = current_node;
current_node = next_node;
}

*head = prev_node;
return (*head);
}
