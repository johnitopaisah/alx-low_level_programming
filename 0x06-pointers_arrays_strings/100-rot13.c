#include "main.h"

/**
 * rot13 - function that encodes a string using 'rot13'.
 * @str: pointer to the string
 *
 * Return: Return a pointer
 */
char *rot13(char *str)
{
	int index, i;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (index = 0; str[index]; index++)
	{
		for (i = 0; input[i]; i++)
		{
			if (str[index] == input[i])
			{
				str[index] = output[i];
				break;
			}
		}
	}
	return (str);

}
