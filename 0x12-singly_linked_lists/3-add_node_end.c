#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - adds a node at the end of list
 *
 * @head: first node
 * @str: pointer to node
 *
 * Return: address to newnode
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = newnode;

	return (newnode);
}
