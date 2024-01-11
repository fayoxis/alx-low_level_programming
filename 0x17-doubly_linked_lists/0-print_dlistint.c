#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Prints the values of a doubly linked list
 * @head: Head of the doubly linked list
 *
 * Return: The number of nodes in the doubly linked list
 */
size_t print_dlistint(const dlistint_t *head)
{
    size_t nodes = 0;
    const dlistint_t *temp;

    for (temp = head; temp != NULL; temp = temp->next)
    {
        printf("%d\n", temp->n);
        nodes++;
    }
    return nodes;
}
