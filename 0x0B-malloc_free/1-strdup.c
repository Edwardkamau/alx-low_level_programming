#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a string
 *
 * @str: String to be duplicated
 *
 * Return: poiter to a string or NULL if the
 * string is null
 */

char *_strdup(char *str)
{
	char *strDup;
	int i;
	int j;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		strDup = malloc(sizeof(*str) * i);
		i++;
	}

	j = 0;

	while (str[j] != '\0')
	{
		strDup[j] = str[j];
		j++;
	}

	return (strDup);
}
