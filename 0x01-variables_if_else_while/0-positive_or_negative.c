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

	srand(time(0));
        n = rand() - RAND_MAX / 2;

        /**
         * n is random number
         */

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

	return (0);

	/**
	 * return is 0 (success)
	 */
}
