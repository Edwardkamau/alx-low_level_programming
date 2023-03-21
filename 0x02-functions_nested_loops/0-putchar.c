#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints _putchar
 *
 * Return: Always 0 (Success)
 */

#define MAXSTRING 80

int main(void)
{
	char message[] = "_putchar";

	for (int n = 0; n < MAXSTRING; n++)
	{
	if (message[n] == '\0')
	{

	putchar('\n');
	break;
	}
	else
	putchar(message[n]);
	}

	return (0);
}
