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
		_putchar(n);
	}
	_putchar('\n');

}
