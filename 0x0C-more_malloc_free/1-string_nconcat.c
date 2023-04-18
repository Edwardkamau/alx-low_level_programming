#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 * @n: count in strings
 *
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	int i;
	unsigned int j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	concat = malloc(sizeof(char) * (i + n + 1));
	if (concat == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}
	while (j < n && s2[j] != '\0')
	{
		concat[i] = s2[j];
		i++, j++;
	}
	concat[i] = '\0';

	return (concat);
}
