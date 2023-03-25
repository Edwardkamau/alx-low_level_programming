#include "main.h"

/**
 * _isdigit - prints 1 if input is digit
 * and prints 0 if any other
 *
 * @c: character in ASCII code
 *
 * Return: 1 for digit and 0 else
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	else
	{
	return (0);
	}

	_putchar('\n');
}
