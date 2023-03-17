#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * n: random number
 *
 * Description: prints last digit of last saved number
 * Return: always 0 (success)
 */

int main(void)
{
	int n;
	int lst_dgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*
	 * n is a random number
	 */

	if ((n % 10) > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
	else if ((n % 10) == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, n % 10);
	}
	else
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	}

	return (0);

	/**
	 * Return is 0 (success)
	 */
}
