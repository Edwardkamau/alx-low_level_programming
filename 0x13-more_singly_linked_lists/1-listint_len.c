#include <stdlib.h>
#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * listint_len - counts the elements in a linked list
 *
 * @h: pointer to head
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
