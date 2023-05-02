#include "lists.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - computes string length
 *
 * @ptr: pointer to index in string
 *
 * Return: string count
 */

int _strlen(const char *ptr)
{
	int count;

	count = 0;
	while (ptr[count])
	{
		;
		count++;
	}
	return (count);
}

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
	int i, len;
	char *data;
	list_t *newnode;

	if (str == NULL || head == NULL)
		return (NULL);
	len = _strlen(str);
	newnode = *head;
	data = malloc((len + 1) * sizeof(char));

	i = 0;
	while (str[i])
	{
		data[i] = str[i];
	}
	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		free(data);
		return (NULL);
	}
	newnode->str = data;
	newnode->len = len;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
