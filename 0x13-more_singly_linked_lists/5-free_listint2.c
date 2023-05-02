#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - free the list and sets *head to NULL
 *
 * @head: first node
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *c;

	if (head == NULL)
		return;
	while (*head)
	{
		c = (*head)->next;
		free(*head);
		*head = c;
	}
	*head = NULL;
}
