#include "main.h"

/**
 * set_bit - sets the bit value at index to 1
 *
 * @n: the number whose bit is to be set
 * @index: the bit position in the number
 *
 * Return: 1 upon success and -1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = ((1UL << index) | *n);
	return (1);
}
