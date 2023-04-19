#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - returns a pointer to calculation
 *
 * @argc: number of arguments
 * @argv: arguments passed
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	int a;
	int b;
	int (*func)(int)(int);

	if (argc != 4)
		printf("Error\n");
		return (98);

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	func = get_op_func(argv[2]);

	if (func == NULL || (argv[2][0] == '/' && b == 0) || (argv[2][0] == '%' && b == 0))
		{
			printf("Error\n");
			exit(100);
		}
		printf("%d\n", func(a, b));
	}

	return (0);
}
