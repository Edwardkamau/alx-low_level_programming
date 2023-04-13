#include "main.h"
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

/**
 *free_grid - Deallocates the memory of a program
 *
 *@height: rows
 *@grid: two dimensional array
 *
 *Return: nothing
 */

void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
	{
		free(grid[h]);
	}
	free(grid);
}
