#include "main.h"

/**
 * print_alphabet - entry point
 *
 * Description: prints lowercase alphabets
 *
 * Return: void (success)
 */

void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	putchar('\n');

}
