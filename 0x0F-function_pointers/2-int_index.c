#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array.
 * @array: pointer to the array.
 * @size: size of the array.
 * @cmp: pointer to the comparison function.
 *
 * Return: Index of the first element for which the comparison function
 *         returns non-zero, or -1 if no elements match or if size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int k;
if (array == NULL || size <= 0 || cmp == NULL)
return (-1);
for (k = 0; k < size; k++)
{
if (cmp(array[k]))
return (k);
}
return (-1);
}
