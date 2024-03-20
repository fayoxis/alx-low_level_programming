#!/usr/bin/python3
"""this Function as a module for  island_perimeter(grid)"""


def island_perimeter(grid):
    """return1: returns perimeter of island described in the grid.
    """
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])
    i = 0

    while i < rows:
        j = 0

        while j < cols:
            if grid[i][j]:
                num = 0

                if i <= 0 or not grid[i - 1][j]:
                    num += 1
                if j <= 0 or not grid[i][j - 1]:
                    num += 1
                if j >= cols - 1 or not grid[i][j + 1]:
                    num += 1
                if i >= rows - 1 or not grid[i + 1][j]:
                    num += 1

                perimeter += num

            j += 1

        i += 1

    return perimeter
