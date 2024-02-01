#!/usr/bin/python3
"""
5-island_perimeter.py
"""


def island_perimeter(grid):
    """
    returns the perimeter of the island described in grid

    Args:
        grid: is a list of list of integers:
    """

    height = 0
    length = 0
    last_col = 0
    land = 1

    if len(grid) > 100:
        raise Exception("grid too big")
    if land in grid[0] or land in grid[len(grid) - 1]:
        raise Exception("Island must be surrounded by water")
    for rows in grid:
        if len(rows) > 100:
            raise Exception("grid too big")
        if len(grid) == len(rows):
            raise Exception("grid must be a rectangle")
        if land in rows:
            height += 1
        for i in range(len(rows)):
            if land == rows[0] or land == rows[len(rows) - 1]:
                raise Exception("Island must be surrounded by water")
            if rows[i] == 1:
                if i > last_col:
                    length += 1
                    last_col = i

    return 2 * (height + length)
