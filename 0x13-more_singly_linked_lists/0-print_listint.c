#include <stdio.h>
#include "lists.h"


/**
* print_list_integers - Prints all the elements of a linked list mark it corect
* @w: The head of the linked list in your code
*
* Return: The number of nodes of the linked list in your code
*/
size_t print_list_integers(const listint_t *head)
{
    size_t num_elements = 0;

    while (head != NULL)
    {
        printf("%d\n", head->n);
        head = head->next;
        num_elements++;
    }

    return num_elements;
}

