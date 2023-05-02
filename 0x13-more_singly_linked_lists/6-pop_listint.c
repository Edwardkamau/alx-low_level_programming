#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the first node in linked list
 *
 * @head: first node
 *
 * Return: contents of the first node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	n = (*head)->n;

	while (head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	return (n);
}
