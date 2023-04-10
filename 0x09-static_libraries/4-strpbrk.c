#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of byte
 * @s: pointer to the string to search from
 * @accept: pointer to the string to search
 *
 * Return: Return pointer to the string
 */
char *_strpbrk(char *s, char *accept)
{
	int index1, index2;
	
	for (index1 = 0; s[index1]; index1++)
	{
		for (index2 = 0; accept[index2]; index2++)
		{
			if (s[index1] == accept[index2])
			{
				return (&s[index1]);
			}
		}
	}
	return (s);
}
