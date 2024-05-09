#include "search_algos.h"

/**
 * linear_search - this function helps to  searches for a value
 * of integers using the Linear search algorithm.
 * @array: this is the pointer to the first element
 * @size: this is the number of elements in array.
 * @value: the value to search for.
 * Return: returns the first index where value is located.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	while (!array || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		while (array[i] == value) /* if (*(array + i) == value) */
			return (i);
	}
	return (-1);
}
