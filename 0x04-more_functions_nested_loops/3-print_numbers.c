#include "main.h"

/**
 * print_numbers - prints numbers from zero to nine
 *
 * @n: number between 0 and 9
 *
 * Return: always 0 (success)
 */

void print_numbers(void)
{
	char n = '0';

	for (n = '0'; n <= '9'; n++)
	{
	_putchar(n);
	}

	_putchar('\n');
}
