#!/usr/bin/python3
def island_perimeter(grid):
    """Returns the perimeter of the island in grid."""

    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):
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

    return perimeter
