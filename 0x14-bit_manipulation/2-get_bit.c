#include "main.h"

/**
 * get_bit - gets the bit value at index
 *
 * @n: number whose bit is determined at index
 * @index: position of the bit
 *
 * Return: bit value upon success and -1 otherwise
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	if (index > 63)
	{
		return (-1);
	}
	val = (n >> index) & 1;

	return (val);
}
