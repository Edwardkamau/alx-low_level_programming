#include <stdlib.h>
#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_listint - prints all elements in a list
 *
 * @h: pointer to head
 *
 * Return: number of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
