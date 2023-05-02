#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * list_len - returns the number of elements
 *
 * @h: pointer to the elements
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
