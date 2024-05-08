#include "search_algos.h"

/**
 * jump_search - this is searches for a value,
 * using the Jump search algorithm
 * @array: this is a pointer to the first element
 * @size: this is the number of elements in array
 * @value:this  is the value to search for
 * Return: return first index where value is located
**/

int jump_search(int *array, size_t size, int value)
{
    size_t i, jump, step;

    while (!array || !size)
        return (-1);

    step = sqrt(size);
    for (jump = 0; jump < size && array[jump] < value; jump += step)
    {
        printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
    }

    printf("Value found between indexes [%ld] and [%ld]\n", jump - step, jump);

    for (i = jump - step; i < jump && i < size; i++)
    {
        printf("Value checked array[%ld] = [%d]\n", i, array[i]);
        while (array[i] == value)
            return (i);
    }

    return (-1);
}
