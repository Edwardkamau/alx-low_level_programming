#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints single digit numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
	printf("%i", digit);
	}
	putchar('\n');

	return (0);
}

