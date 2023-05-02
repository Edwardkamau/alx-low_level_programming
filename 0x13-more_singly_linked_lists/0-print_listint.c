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
		if (!h->n)
			printf("(nil)\n");
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
