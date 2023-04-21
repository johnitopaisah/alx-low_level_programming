#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings
 * @separator: pointer to string as the strings separator
 * @n: number of the strings passed
 * @...: indication of variadic pointer
 *
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	unsigned int i;
	char *mem;

	va_start(string, n);
	for (i = 0; i < n; i++)
	{
		mem = va_arg(string, char *);
		if (mem == NULL)
		{
			mem = "(nil)";
		}

		printf("%s", mem);

		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(string);
	printf("\n");
}
