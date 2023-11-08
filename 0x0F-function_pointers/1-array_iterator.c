#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Executes a given action on each element of an array.
 * @array: The array.
 * @size: The size of the array.
 * @action: A pointer to the function to be executed on each element.
 * Return: void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t k = 0;
if (array == NULL || action == NULL)
return;
while (k < size)
{
action(array[k]);
k++;
}
}
