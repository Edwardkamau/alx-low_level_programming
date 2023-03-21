#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - entry point
 *
 * Description: prints lowercase alphabets
 *
 * Return: 0 (success)
 */

void print_alphabet(void)
{
	int n;

	for (n = ; n <= 'z'; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
