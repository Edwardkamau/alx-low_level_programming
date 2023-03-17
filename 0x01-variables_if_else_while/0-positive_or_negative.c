#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * n: random number
 *
 * Description: prints positive, negative or 0
 * Return: always 0 (success)
 */

int main(void)
{
	int n;

	if (n > 0)
	{
		printf("number is positive\n");
	}
	else if (n == 0)
	{
		printf("number is 0\n");
	}
	else
	{
		printf("number is negative\n");
	}

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/**
	 * n is random number
	 */

	return (0);

	/**
	 * return is 0 (success)
	 */
}
