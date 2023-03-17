#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints digit combinations
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		putchar(digit + '0');

	if (digit < 9)
	{
		putchar(',');
		putchar(' ');
	}
	}

	putchar('\n');

	return (0);
}
