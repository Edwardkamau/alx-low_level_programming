#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the program name on command line
 *
 * @argc: count of arguments
 * @argv: array of arguments during compilation
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
