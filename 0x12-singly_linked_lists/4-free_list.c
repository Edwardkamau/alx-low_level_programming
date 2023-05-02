#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees the allocated memory
 *
 * @head: first node
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *f;
	while (head != NULL)
	{
		f = head->next;
		free(head->str);
		free(head);
		head = f;
	}
}
