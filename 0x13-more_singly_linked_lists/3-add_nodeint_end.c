#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 *
 * n: contents of the new node
 * @head: first node in list
 *
 * Return: pointer to new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *temp = *head;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = newnode;

	return (newnode);
}
