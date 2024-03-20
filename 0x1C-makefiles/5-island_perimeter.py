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

    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1

    return size * 4 - edges * 2
