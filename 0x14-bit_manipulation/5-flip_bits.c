#include "main.h"

/**
 * flip_bits - flips bits to get from a number to another
 *
 * @n: number to get from
 * @m: number to get to
 *
 * Return: number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	unsigned long int initial;
	unsigned long int new = n ^ m;
	int new_number = 0;

	i = 63;
	while (i >= 0)
	{
		initial = new >> i;
		if (initial & 1)
		{
			new_number++;
		}
		i--;
	}
	return (new_number);
}
