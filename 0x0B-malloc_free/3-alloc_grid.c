#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Creates a 2D grid using nested loops.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * Description: This function dynamically allocates a 2D grid
 * with the specified width and height. It returns a pointer to
 * the allocated 2D array.
 *
 * Return: A pointer to the allocated 2D array.
 */
int **alloc_grid(int width, int height)
{
int **grid;
int row, col;
int i;
/* Loop variable for rows */
/* Check if width or height is non-positive */
if (width <= 0 || height <= 0)
return (NULL);
/* Allocate memory for the rows of the grid */
grid = malloc(sizeof(int *) * height);
/* Check if memory allocation failed */
if (grid == NULL)
return (NULL);

/* Allocate memory for each column of each row in the grid */
for (row = 0; row < height; row++)
{
grid[row] = malloc(sizeof(int) * width);

/*
* If memory allocation for a row fails,
* free previously allocated memory and return NULL
*/

if (grid[row] == NULL)
{
/* Free memory allocated for the previous rows */

for (i = 0; i < row; i++)
free(grid[i]);
free(grid);
return (NULL);
}
}
/* Initialize all elements of the grid to 0 */
for (row = 0; row < height; row++)
{
for (col = 0; col < width; col++)
grid[row][col] = 0;
}
return (grid);
}



