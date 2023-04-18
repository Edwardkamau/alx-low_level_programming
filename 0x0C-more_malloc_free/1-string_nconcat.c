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
	char *s3;
	char *concat;

	s1 = strlen(s1);
	s2 = strlen(s2);
	s3 = s1 + s2 + 1;

	concat = malloc(s3);
	if (concat == NULL)
	{
		return (NULL);
	}
	if (n >= s2)
	{
		s3 = s2;
	}
	for (n = 0; n < s1; n++)
	{
		concat[n] = s1[n];
	}
	for (n = 0; n < s2; n++)
	{
		concat[n + s1] = s2[n];
	}
	concat[s3 - 1] = '\0';
	free(concat);

	return (concat);
}
