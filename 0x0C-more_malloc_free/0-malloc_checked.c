#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: size of memory block to be allocated
 *
 * Return: pointer to the allocated memory
 * terminates with value of 98 if malloac fails
 */
void *malloc_checked(unsigned int b)
{
	void *pt;

	pt = malloc(b);
	if (pt == NULL)
	{
		exit(98);
	}
	return (pt);
}
