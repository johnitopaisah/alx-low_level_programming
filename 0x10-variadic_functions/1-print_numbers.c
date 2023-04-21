#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers
 * @separator: pointer to string as the separator
 * @n: the number of integer passed to the function
 * @...: the ellipsis indicating it is a variadic function
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numb;
	unsigned int i;

	va_start(numb, n);


	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numb, int));
		if (separator != NULL && i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(numb);
	printf("\n");
}
