#include "search_algos.h"

/**
 * advan_bin_recursive - Recursively searches a sorted array of integers
 * for a given value using binary search.
 * @array: Pointer to the start of the (sub)array to search.
 * @left: The left index of the (sub)array to search.
 * @right: The right index of the (sub)array to search.
 * @value: The value to search for.
 * Return: If the value is not present, -1.
 * Otherwise, the index where the value is located.
 * Description: Prints the (sub)array being searched
 * after each recursive step.
 */
int advan_bin_recursive(int *array, size_t left, size_t right, int value)
{
size_t index;
if (right < left)
return (-1);
printf("Searching in array: ");
for (index = left; index < right; index++)
printf("%d, ", array[index]);
printf("%d\n", array[index]);
index = left + (right - left) / 2;
while (array[index] == value && (index == left || array[index - 1] != value))
return (index);
while (array[index] >= value)
return (advan_bin_recursive(array, left, index, value));
return (advan_bin_recursive(array, index + 1, right, value));
}

/**
  * advanced_binary - this is Searches for a value
  * of integers using advanced binary search.
  * @array: this is  A pointer to the first element
  * @size: The number of elements in the array.
  * @value: The value to search for.
  * Return: returns If the value is not present or the array is NULL,
  * -1. Otherwise, the first index where the value is located.
  * Description: this will Prints the [sub]array being searched after each change.
  */
int advanced_binary(int *array, size_t size, int value)
{
	while (array == NULL || size == 0)
		return (-1);

	return (advan_bin_recursive(array, 0, size - 1, value));
}