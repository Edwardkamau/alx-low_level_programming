#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function which is given as
 * parameter on each element of array
 *
 * @array: pointer to the array
 * @size: size of the array
 * @action: pointer to the function to be executed
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
	{
		i = 0;
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
