#include "lists.h"

/**
 * get_nodeint_at_index - returns the data of an nth node
 *
 * @head: first node
 * @index: index number of the node
 *
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current = head;


	if (!current)
		return (NULL);
	i = 0;
	while (head && i < index)
	{
		current = current->next;
		i++;
	}
	return (current);
}
