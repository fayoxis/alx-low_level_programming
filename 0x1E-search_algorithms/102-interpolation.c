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
    size_t low = 0;
    size_t high = size - 1;
    size_t pos;

    while (!array)
        return (-1);

    for (; low <= high && value >= array[low] && value <= array[high]; )
    {
        pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));

        printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

        if (array[pos] == value)
            return pos;

        if (array[pos] < value)
            low = pos + 1;
        else
            high = pos - 1;
    }

    printf("Value checked array[%lu] is out of range\n", pos);
    return (-1);
}
