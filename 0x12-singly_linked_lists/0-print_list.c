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
		printf("[%u], %s\n", h->len, h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}

	return (i);
}

