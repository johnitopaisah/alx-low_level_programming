#include "main.h"
#include <stdlib.h>

/**
 * word_leng - function to locate the index marking the end
 * of the first word containing withing= a string.
 * @strg: The string.
 *
 * Return: Return the index of end of the word pointed to
 */
int word_leng(char *strg)
{
	int index = 0, leng = 0;

	while (strg[index] && strg[index] != ' ')
	{
		leng++;
		index++;
	}
	return (leng);
}


/**
 * word_count - function to coun the number of words in the string
 * @strg: string to be counted
 *
 * Return: Return the number of words
 */
int word_count(char *strg)
{
	int count = 0;
	int leng = 0;
	int index;

	for (index = 0; strg[index]; index++)
		leng++;

	for (index = 0; index < leng; index++)
	{
		if (strg[index] != ' ')
		{
			count++;
			index += word_leng(strg + index);
		}
	}
	return (count);

}


/**
 * strtow - function to split a string into a words
 * @strg: The string to be splitted
 *
 * Return: Return a pointer to an array of strings (i.e the words)
 */
char **strtow(char *strg)
{
	char **strings;
	int index = 0;
	int words, w, letters, l;

	words = word_count(strg);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * words + 1);
	if (strings == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (strg[index] == ' ')
			index++;

		letters = word_leng(strg + index);

		strings[w] = malloc(sizeof(char) * (letters + 1));
		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);

			free(strings);
			return (NULL);
		}

		for (l = 0; l < letters; l++)
			strings[w][l] = strg[index++];
		strings[w][l] = '\0';
	}
	strings[w] = NULL;

	return (strings);
}
