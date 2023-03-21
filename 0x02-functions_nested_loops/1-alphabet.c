#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints lowercase alphabets
 *
 * Return: 0 (success)
 */

int main(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
