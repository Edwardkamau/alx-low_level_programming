#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - prints a string pointing to s1
 *
 * @s1: String 1
 * @s2: string 2
 *
 * Return: Newly allocated space in memory or null
 * upon failure
 */
char *str_concat(char s1, char s2)
{
	char *concat;
	int i, len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	i = len1 = len2 = 0;

	while (s1[i] != '\0')
	{
		i++;
		len1++;
	}
	while (s2[i] != '\0')
	{
		i++;
		len2++;
	}
	concat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s1[i] < len1)
	{
		concat[i] = s1[i];
		i++;
	}
	while (s2[i] < len2)
	{
		concat[i + len1] = s2[i];
	}
	concat[i + len1] = '\0';
	return (concat);
}
