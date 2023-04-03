#include "main.h"

/**
 * _memset - fills the first bytes of the memory area pointed
 * to by s with constant byte b
 *
 * @n: size in bytes
 * @s: pointer to n
 * @b: desired size
 *
 * Return: s (pointer to memory area)
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (n = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
