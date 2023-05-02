#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * add_nodeint - adds a node at the beginning of list
 *
 * @head: first node
 * @n: integer in the node
 *
 * Return: pointer to the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
