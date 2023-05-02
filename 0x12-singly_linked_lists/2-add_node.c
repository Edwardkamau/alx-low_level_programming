#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a node at the beginning of list
 *
 * @head: first node
 * @str: pointer to the head
 *
 * Return: new head
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int len;
	list_t *newnode;

	if (str == NULL || head == NULL)
		return (NULL);
	len = 0;
	while (str[len])
	{
		len++;
	}
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
