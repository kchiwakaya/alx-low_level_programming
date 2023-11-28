#!/usr/bin/python3
"""island perimeter function."""


def island_perimeter(grid):
    """Return the perimiter of an island."""

    width = len(grid[0])
    height = len(grid)
    sides = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    sides += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    sides += 1
    return size * 4 - sides * 2

