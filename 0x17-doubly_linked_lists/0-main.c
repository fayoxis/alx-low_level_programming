#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    dlistint_t *new;
    dlistint_t hello = {8, NULL, NULL};
    size_t data;

    head = &hello;
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        dprintf(2, "Error: Can't malloc\n");
        return (EXIT_FAILURE);
    }
    new->data = 9;
    head->prev = new;
    new->next = head;
    new->prev = NULL;
    head = NULL;
    data = DoublyLinkedListNode(head);
    printf("-> %lu elements\n", data);
    free(new);
    return (EXIT_SUCCESS);
}
