#include "main.h"
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>
#include <stddef.h>
/**
 *alloc_grid - returns a pointer to two dimensional array
 *
 *@height: rows
 *@width: columns
 *
 *Return: pointer to array or null on failure
 */

int **alloc_grid(int width, int height)
{
	int h;
	int w;
	int **allocgrid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	allocgrid = malloc(sizeof(int *) * height);
	if (allocgrid == NULL)
	{
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		allocgrid[h] = malloc(sizeof(int) * width);
		if (allocgrid[h] == NULL)
		{
			return (NULL);
		}
		for (w = 0; w < width; w++)
		{
			allocgrid[h][w] = 0;
		}
	}
	return (allocgrid);
}
