#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_list - prints the elements in list_t list
 *
 * @h: pointer to the elements
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d], %s\n", h->len, h->str);
		h = h->next;
		i++;
	}

	return (i);
}

