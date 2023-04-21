#include <stdio.h>
#include <stdarg.h>

int sum(int count, ...)
{
	va_list mynum;
	va_start(mynum, count);
	int result = 0, i;

	for (i = 0; i < count; i++)
	{
		result += va_arg(mynum, int);
	}
	va_end(mynum);
	return(result);
}

int main(void)
{
	int add;

	add = sum(4, 3, 5, 7, 8);
	printf("%d\n", add);
	return (0);
}
