#include "lists.h"
#include <stdio.h>

/**
 * DoublyLinkedListNode - Prints the values of a doubly linked list
 * @head: Head of the doubly linked list
 *
 * Return: The number of nodes in the doubly linked list
 */
size_t DoublyLinkedListNode(const  dlistint_t *head)
{
    size_t nodeCount = 0;
    const  dlistint_t *temp;

    temp = head;
    while (temp)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
        nodeCount++;
    }
    return nodeCount;
}
