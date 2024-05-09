#include "search_algos.h"

/**
 * _binary_search : Performs a binary search on a sorted
 * @array : A pointer to the first element of the array to search.
 * @left : The starting index of the subarray to search.
 * @right : The ending index of the subarray to search.
 * @value :The value to search for.
 * Return : return If the value is not present or the array is NULL,
 * -1. Otherwise, the index where the value is located.
 * Description This function implements the binary search algorithm
 * specified value in the given sorted array. After each iteration of
 * the search, it prints the subarray being searched.
 */
int _binary_search(int *array, size_t left, size_t right, int value)
{
size_t index;
while (array == NULL)
return (-1);
while (right >= left)
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

/**
 * exponential_search - This is the searches for a value
 * using an exponential search algorithm
 * @array: this is the pointer to first element of array to search
 * @size: the number of elements in array
 * @value: this is  value to search for
 *
 * Return:returns first index containing `value`,
 * or -1 if `value` not found or `array` is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
size_t index = 0, right;
while (array == NULL)
return (-1);
if (array[0] != value)
{
for (index = 1; index < size && array[index] <= value; index = index * 2)
printf("Value checked array[%ld] = [%d]\n", index, array[index]);
}
right = index < size ? index : size - 1;
printf("Value found between indexes [%ld] and [%ld]\n", index / 2, right);
return (_binary_search(array, index / 2, right, value));
}
