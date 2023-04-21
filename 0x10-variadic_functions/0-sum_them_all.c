#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: the number of the arguments to pass
 * @...: the variadic list
 *
 * Return: the number sumed.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list mynum;
	unsigned int i, add = 0;

	va_start(mynum, n);
	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			add += va_arg(mynum, int);
		}
		va_end(mynum);
		return (add);
	}
}
