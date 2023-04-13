#include "main.h"
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

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
	int k;
	int **allocgrid = malloc(sizeof(*allocgrid) * height);

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	if (allocgrid == NULL)
	{
		free(allocgrid);
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		allocgrid[h] = malloc(width * sizeof(*allocgrid[h]));
		if (allocgrid[h] == NULL)
		{
			for (k = 0; k < h; k++)
			{
				free(allocgrid[k]);
			}
		}
		for (w = 0; w < width; w++)
		{
			allocgrid[h][w] = 0;
		}
	}
	return (allocgrid);
}
