#include "search_algos.h"

/**
 * jump_list -this is  Searches for a value
 * @list: Pointer to the head of the linked list.
 * @size: Number of nodes in the list.
 * @value: Value to search for.
 * Return: Pointer to the first node containing the value
 * Description: This function performs a jump search
 * It first calculates the jump step size (square root of the list size),
 * and then iterates through the list
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
size_t step, step_size;
listint_t *node, *jump;
if (list == NULL || size == 0)
return (NULL);
step = 0;
step_size = sqrt(size);
jump = list;

while (jump->index + 1 < size && jump->n < value)
{
node = jump;
step += step_size;
while (jump->index < step && jump->index + 1 < size)
jump = jump->next;
printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
}
printf("Value found between indexes [%ld] and [%ld]\n",
node->index, jump->index);
while (node->index < jump->index && node->n < value)
{
printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
node = node->next;
}
printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
return (node->n == value ? node : NULL);
}
