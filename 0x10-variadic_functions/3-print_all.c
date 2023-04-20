#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints any type of parameter
 *
 * @format: types of arguments passed
 *
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	char c;
	int i = 0;
	char *s;
	float f;

	va_start(ap, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = (char) va_arg(ap, int);
				printf("%c", c);
				break;
			case 'i':
				printf("%d", i);
				break;
			case 'f':
				f = (float) va_arg(ap, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(ap, char *);
					if (s == NULL)
						printf("(nil)");
					else
						printf("%s", s);
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1] != '\0' && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
			printf(", ");
		i++;
	}
	va_end(ap);
	printf("\n");
}

