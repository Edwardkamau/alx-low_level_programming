#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - computes the sum of function parameters
 *
 * @n: last named parameter in the function
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	va_start(ap, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, const unsigned int);
	}
	va_end(ap);
	return (sum);
}
