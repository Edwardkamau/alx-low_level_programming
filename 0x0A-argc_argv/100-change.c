#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints min amount of coins to make change
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: number of coins or Error if more than two arguments
 * are passed
 */
int main(int argc, char *argv[])
{
	int cents;
	int coins = 0;

	if (argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) <= 0)
	{
		printf("0\n");
	}
	cents = atoi(argv[1]);
	while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}
	printf("%d\n", coins);
	return (0);
}
