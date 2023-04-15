#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints sum of positive numbers
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 upon success, 1 if no nummber
 * is passed
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
