#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: The string
 *
 * Return: String in reverse
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	while (i > 0)
	{
		i--;
		_putchar(s[i]);
	}

	_putchar('\n');
}
