#include <stdio.h>

/**
* main - Print all single digit numbers
*
* Description: prints 0 to 9
* Return: Always 0 (Success)
*/

int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
	putchar(digit + '0');
	}
	putchar('\n');

	return (0);
}

