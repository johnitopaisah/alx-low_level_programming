#include "main.h"

/**
 * _strspn - function to get the length of a prefix substring
 * @s: pointer to the string
 * @accept: pointer to the accept prefix
 *
 * Return: Return pointer to the string
 */
unsigned int _strspn(char *s, char *accept)
{
	int index1, index2;
	int leng = 0;

	leng = 0;
	for (index1 = 0; s[index1]; index1++)
	{
		for (index2 = 0; accept[index2]; index2++)
		{
			if (s[index1] == accept[index2])
			{
				leng++;
				break;
			}
		}
		if (!accept[index2])
		{
			break;
		}
	}
	return leng;
}
