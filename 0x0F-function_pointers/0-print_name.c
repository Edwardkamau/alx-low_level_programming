#include <stdlib.h>
#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints the name
 *
 * @name: char pointer
 * @f: pointer to function
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (*name != '\0' && f != NULL && name != NULL)
	{
		(*f)(name);
	}
}
