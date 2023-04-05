#include "main.h"
/**
 * sqtRecursive - prints square root recursively doing binary search
 * @s: inital number
 * @e: last number within the range of number
 * @m: given number
 * Return: 1 if not found sqrroot, else squareroot
 **/
int sqtRecursive(int s, int e, int m)
{
	long mid;

	if (e >= s)
	{
		mid = s + (e - s) / 2;
		if (mid * mid == m)
			return (mid);
/* following binary search */
		if (mid * mid > m)
			return (sqtRecursive(s, mid - 1, m));
		if (mid * mid < m)
			return (sqtRecursive(mid + 1, e, m));
	}
	return (-1);
}
/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: given number
 * Return: square root of n or -1
 **/
	int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sqtRecursive(2, n, n));
}
