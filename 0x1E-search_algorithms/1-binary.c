#include "search_algos.h"

/**
 * binary_search - it searches for a value in a sorted array
 * using the Binary search algorithm
 * @array: this  is a pointer to the first element
 * @size: this is the number of elements in array
 * @value: this is the value to search for
 * Return: return the index where value is located
**/

int binary_search(int *array, size_t size, int value)
{
	size_t index, left, right;
	while (!array)
		return (-1);
	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (index = left; index < right; index++)
			printf("%d, ", array[index]);
		printf("%d\n", array[index]);

		index = left + (right - left) / 2;
		while (array[index] == value)
			return (index);
		if (array[index] > value)
			right = index - 1;
		else
			left = index + 1;
	}

	return (-1);
}
