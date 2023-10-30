#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *  free_grid - frees a 2D array
 * @array: the 2D array to be freed
 * @height: the height dimension of the array
 * Description: This function frees the
 * memory allocated for a 2D array.
 * Each row of the array is freed first,
 * followed by freeing the array itself.
 */
void  free_grid(int **array, int height)
{
int k = 0;
while (k < height)
{
free(array[k]);
k++;
}
free(array);
}
