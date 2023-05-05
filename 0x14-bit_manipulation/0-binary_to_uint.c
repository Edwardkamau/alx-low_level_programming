#include "main.h"

/**
 * binary_to_uint - converts number binary to decimal
 *
 * @b: the character being pointed in the string
 *
 * Return: decimal number
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_num;

	if (b == NULL)
		return (0);
	i = 0;
	dec_num = 0;
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		dec_num = dec_num * 2 + (b[i] - '0');
		i++;
	}
	return (dec_num);
}
