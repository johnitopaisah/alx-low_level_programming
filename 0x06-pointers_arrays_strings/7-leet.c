#include "main.h"

/**
 * leet - Encodes a string to 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string
 */
char *leet(char *str)
{
	int index1 = 0;
	int index2;
	char low_letter[] = {'a', 'e', 'o', 't', 'l'};
	char upp_letter[] = {'A', 'E', 'O', 'T', 'L'};
	char number[] = {'4', '3', '0', '7', '1'};

	while (str[index1])
	{
		for (index2 = 0; index2 < 5; index2++)
		{
			if (str[index1] == low_letter[index2] ||
					str[index1] == upp_letter[index2])
			{
				str[index1] = number[index2];
				break;
			}
		}
		index1++;
	}

	return (str);
}
