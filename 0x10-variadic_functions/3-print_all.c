#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - function that prints anything based on format specifier
 * @format: format specifier string
 * @...: variable arguments
 *
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list anything;
	unsigned int i = 0;
	char *string;
	char separator = ',';

	va_start(anything, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(anything, int));
				break;
			case 'i':
				printf("%i", va_arg(anything, int));
				break;
			case 'f':
				printf("%f", va_arg(anything, double));
				break;
			case 's':
				string = va_arg(anything, char *);
				if (string == NULL)
				{
					string = "(nil)";
				}
				printf("%s", string);
				break;
			default:
				separator = 0;
				break;
		}
		if (format[i] && separator)
			printf(", ");
		i++;
	}
	va_end(anything);
	printf("\n");
}
