#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: pointer to the array
 * @size: number of elements in the array
 * @cmp: pointer to the function that compares values
 *
 * Return: returns the index of the first element for
 * which the cmp function does not return 0, -1 i no
 * element match of size is less than 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
