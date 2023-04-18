#include <stdlib.h>

/**
 * _realloc - reallocates memory block using malloc and free
 *
 * @ptr: pointer to the memory location
 * @old_size: amount of memory allocated before
 * @new_size: amount of memory to be used after reallocation
 *
 * Return: pointer to the memory,
 * NULL if memory is not allocated
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i;

	ptr = malloc(old_size * sizeof(void *));
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size * sizeof(void *));
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	p = malloc(new_size * sizeof(char));
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			p[i] = ((char *)ptr)[i];
			i++;
		}
		free(ptr);
		return (p);
	}
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			p[i] = ((char *)p)[i];
		free(ptr);
		return (p);
	}
	return (p);
}
