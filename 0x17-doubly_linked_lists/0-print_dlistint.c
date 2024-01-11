#include "lists.h"
#include <stdio.h>

/**
 * printDoublyLinkedList - Prints the values of a doubly linked list
 * @head: Head of the doubly linked list
 *
 * Return: The number of nodes in the doubly linked list
 */
size_t printDoublyLinkedList(const DoublyLinkedListNode *head)
{
    size_t nodeCount = 0;
    const DoublyLinkedListNode *temp;

    temp = head;
    while (temp)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
        nodeCount++;
    }
    return nodeCount;
}
