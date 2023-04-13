#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * word_counterRec - counts number of words in the string
 *
 * @str: string
 * @i: index
 *
 * Return: word count
 */
int wordcounterRec(char *str, int i)
{
	if  (str[i] == '\0')
		return (0);
	if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
		return (1 + wordcounterRec(str, i + 1));
	return (1 + wordcounterRec(str, i + 1));
/**
 * word_counter - counts number of words in the string
 *
 * @str: string
 *
 * Return: word count
 */

int word_counter(char *str)
{
	if (str[0] != ' ')
		return (1 + wordcounterRec(str, 0));
	return (wordcounterRec(str, 0));
}
/**
 * **strtow - splits a string into words
 *
 * @str: string to be split
 *
 * Return: pointer to an array of words or NULL if
 * the string is NULL or space
 */

char **strtow(char *str)
{
	char **strDup;
	int i, n, m, words;

	if (str == NULL || str[0] == 0)
		return (NULL);
	words = word_counter(str);
	if (words < 1)
		return (NULL);
	strDup = malloc(sizeof(char *) * (words + 1));
	if (strDup == NULL)
		return (NULL);
	i = 0;
	while (i < words && *str != '\0')
	{
		if (*str != '')
		{
			n = 0;
	while (str[n] != '')
				n++;
			strDup[i] = malloc(sizeof(char) * (n + 1));
			if (strDup[i] == NULL)
			{
				while (--i >= 0)
					free(strDup[--i]);
				free(strDup);
				return (NULL);
			}
			m = 0;
			while (m < n)
			{
				strDup[i][m] = *str;
				m++, str++;
			}
			strDup[i][m] = '\0';
			i++;
		}
		str++;
	}
	strDup[i] = '\0';
	return (strDup);
}
