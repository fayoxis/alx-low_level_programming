#include "search_algos.h"

/**
 * linear_skip - Performs a linear skip search for a value
 * @list: A pointer to the head of the linked list to search.
 * @value: The value to search for.
 * Return: If the value is not present or the head of the list
 * Otherwise, returns a pointer to the first node
 * Description:  This function implements the linear skip search algorithm
 * to efficiently search for a value in a sorted singly linked list.
 * It prints the value being compared at each step of the search.
 * The jump step used is the square root of the list size,
 * which provides a good balance between
 * the number of jumps and the number of comparisons.
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
skiplist_t *node, *jump;
if (list == NULL)
return (NULL);
node = jump = list;
while (jump->next != NULL && jump->n < value)
{
node = jump;
if (jump->express != NULL)
{
jump = jump->express;
printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
}
else
{
while (jump->next != NULL)
jump = jump->next;
}
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
