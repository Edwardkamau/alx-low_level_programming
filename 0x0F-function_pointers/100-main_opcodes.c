#include <stdio.h>
#include <stdlib.h>
void main_opcodes(unsigned char *p, int size);

/**
 * main - prints the opcodes of its own main function
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (success), 1 or 2 otherwise
 */

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int size = atoi(argv[1]);

	if (size <= 0)
	{
		printf("Error\n");
		return (2);
	}

	main_opcodes((unsigned char *)&main, size);

	return (0);
}

/**
 * main - prints the opcodes of its own main function
 *
 * @p: pointer to address
 * @size: number of bytes to be printed
 *
 * Return: 0 (success), 1 or 2 otherwise
 */

void main_opcodes(unsigned char *p, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%02x ", p[i]);
	}
	printf("\n");
}

