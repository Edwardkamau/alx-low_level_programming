/**
 * factorial - prints factorial of a given number
 *
 * @n: Number whose factorial is calculated
 *
 * Return: integer (factorial of n)
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
	return (n * factorial(n - 1));
	}
}
