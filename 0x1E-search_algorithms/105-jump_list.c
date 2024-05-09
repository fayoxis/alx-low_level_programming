#include "search_algos.h"

/*
 * jump_list - Searches for a value in a sorted singly linked list using jump search.
 * @list: Pointer to the head of the linked list.
 * @size: Number of nodes in the list.
 * @value: Value to search for.
 *
 * Return: Pointer to the first node containing the value, or NULL if not found.
 *
 * This function performs a jump search on the given sorted linked list.
 * It first calculates the jump step size (square root of the list size),
 * and then iterates through the list, jumping by the step size until
 * a value greater than or equal to the target value is found.
 * It then performs a sequential search within the block where the value
 * should be present.
 * The function prints the index and value of each node compared during the search.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t step, step_size;
    listint_t *node, *jump;
    step = 0;
    step_size = sqrt(size);
    node = jump = list;
  
    if (list == NULL || size == 0)
        return (NULL);



    do {
        for (step += step_size; jump->index < step && jump->index + 1 < size; jump = jump->next) {
            if (jump->index + 1 == size)
                break;
        }
        printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);

        if (jump->n >= value) {
            printf("Value found between indexes [%ld] and [%ld]\n", node->index, jump->index);
            break;
        }

        node = jump;
    } while (jump->index + 1 < size);

    while (node->index < jump->index && node->n < value) {
        printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
        node = node->next;
    }

    printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

    return (node->n == value ? node : NULL);
}
