#!/usr/bin/python3
"""defines a function that finds the perimeter of an island"""


def island_perimeter(grid):
    """return the perimeter of the island
    0 in the grid representts water zone
    1 in the grid represents land zone
    Args:
        grid (list): list of integers representing the island
    Return:
        the perimter of the island
    """

    perimeter = 0
    for i in range(0, len(grid), 1):
        for j in range(0, len(grid[0]), 1):
            if grid[i][j] == 1:
                perimeter = perimeter + 4
                if j - 1 >= 0 and grid[i][j - 1] == 1:
                    perimeter -= 2
                if i - 1 >= 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
    return (perimeter)
