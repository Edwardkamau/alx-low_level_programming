#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees the memory occupied by list
 *
 * @head: first node
 *
 * Return: nothing
 */

void free_listint(listint_t *head)
{
	listint_t *c;

	while (head)
	{
		c = head->next;
		free(head);
		head = c;
	}
}

