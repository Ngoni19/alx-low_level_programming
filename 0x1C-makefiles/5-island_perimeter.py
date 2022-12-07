#!/usr/bin/python3
# -*- coding: utf-8 -*-
"""
Created on Thur Dec  8 12:39:55 2022

@author: Ngoni19
"""


def island_perimeter(grid):
    """
    Calculater the Island's P_meter

    Parameter:
        grid (array): is a list of list of integers:
        0 represents a water zone
        1 represents a land zone
        One cell is a square with side length 1
        Grid cells are connected horizontally/vertically (not diagonally).
        Grid is rectangular, width and height don’t exceed 100
        Grid is completely surrounded by water, and there is one island.
        
    Returns: island's P_meter
    """
    Rows = len(grid)
    Col = len(grid[0])
    P_meter = 0
    for x in range(1, Rows - 1):
        for y in range(1, Col - 1):
            if grid[x][y] == 1:
                if grid[x - 1][y] == 0:
                    P_meter += 1
                if grid[x + 1][y] == 0:
                    P_meter += 1
                if grid[x][y - 1] == 0:
                    P_meter += 1
                if grid[x][y + 1] == 0:
                    P_meter += 1
    return P_meter
