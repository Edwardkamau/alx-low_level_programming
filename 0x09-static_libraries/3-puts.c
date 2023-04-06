#include "main.h"
#include "unistd.h"

/**
 * _puts - prints a string followed by a
 * new line
 *
 * @str: the string
 *
 * Return: length of the string
 */

void _puts(char *str)
{
        int i = 0;

        while (*(str + i) != '\0')
        {
                _putchar(str[i]);
                i++;
        }

        _putchar('\n');
}
