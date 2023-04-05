#include "main.h"

/**
 * _pow_recursion - prints the result of x to power y
 *
 * @x: number to be raised to power y
 * @y: power
 *
 * Return: result of x to power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
