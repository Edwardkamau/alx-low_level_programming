#include "main.h"

/**
 * clear_bit - sets the bit at index to 0
 *
 * @n: Number whose bit is to be set
 * @index: position of bit to be set
 *
 * Return: 1 upon success and -1 otherwise
 */


int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}
	*n = (~(1UL << index) & *n);

	return (1);
}
