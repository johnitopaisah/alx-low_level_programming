#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: the minimum value to include in the array.
 * @max: the maiximum value to include to the array
 *
 * Return: pointer to the newly created array if successful, or NULL if fails
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, len;

	len = max - (min + 1);
	arr malloc(sizeof(int) * len);
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		arr[i] = min++;
	}

	return (arr);
}

