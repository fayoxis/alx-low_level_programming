#include "search_algos.h"

/**
 * interpolation_search - Perform an interpolation search on a sorted array
 * @array: Pointer to the first element
 * @size: this is Number of elements in the array
 * @value: Value to search for in the array
 *
 * Return: Index of the first occurrence of the value in the array,
 * or -1 if the value is not found or the array pointer is NULL
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t down = 0;
	size_t up = size - 1;
	size_t post;

	while (!array)
		return (-1);

	while ((array[up] != array[down]) &&
	       (value >= array[down]) && (value <= array[up]))
	{
		post = down + (((double)(up - down) / (array[up] - array[down]))
			    * (value - array[down]));
		printf("Value checked array[%lu] = [%d]\n", post, array[post]);
		if (array[post] < value)
			down = post + 1;
		else if (value < array[post])
			up = post - 1;
		else
			return (post);
	}
	while (value == array[down])
	{
		printf("Value checked array[%lu] = [%d]\n", down, array[down]);
		return (down);
	}
	post = down + (((double)(up - down) / (array[up] - array[down]))
		     * (value - array[down]));
	printf("Value checked array[%lu] is out of range\n", post);
	return (-1);
}
