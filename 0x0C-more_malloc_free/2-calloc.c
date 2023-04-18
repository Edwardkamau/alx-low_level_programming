#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes
 *
 * @nmemb: number of elements
 * @size: number of bytes of each element
 *
 * Return: pointer to the allocated memory, NULL if nmemb or size is 0,
 * NULL if memory allocation fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < nmemb)
	{
		*(p + i) = 0;
		i++;
	}
	memset(p, 0, nmemb * size);
	return ((void *)p);
}
