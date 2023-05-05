#include "main.h"

/**
 * print_binary - prints the binary form of a decimal number
 *
 * @n: decimal number
 *
 * Return: binary number
 */

void print_binary(unsigned long int n)
{
	unsigned long int temp;
	int i, index;

	index = 0;
	i = 63;
	while (i >= 0)
	{
		temp = n >> i;
		if (temp & 1)
		{
			_putchar('1');
			index++;
		}
		else if (index)
		{
			_putchar('0');
		}

		i--;
	}
	if (!index)
		_putchar('0');
}

