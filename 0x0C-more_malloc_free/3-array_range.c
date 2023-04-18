#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 *
 * @min: smallest integer
 * @max: largest integer
 *
 * Return: pointer to the created array, Null if memory allocation fails,
 * NULL if in the arguments passed, min > max
 */

int *array_range(int min, int max)
{
	int i;
	int count;
	int *p;

	if (min > max)
	{
		return (NULL);
	}
	count = (max - min) + 1;
	p = malloc(sizeof(int) * count);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < count && min <= max; i++, min++)
	{
		*(p + i) = min;
	}
	return (p);
}
