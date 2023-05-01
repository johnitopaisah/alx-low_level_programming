#include "main.h"
#include <stdlib.h>

/**
 * word_count - function to coun the number of words in the string
 * @strg: string to be counted
 *
 * Return: Return the number of words
 */
int word_count(char *strg)
{
	int count = 0;
	int i;

	for (i = 0; strg[i] != '\0'; ++i)
	{
		if (strg[i] != ' ' && (strg[i + 1] != ' ' || strg[i + 1] == '\0'))
			count++;
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
	char **words;
	int i, j = 0, k;
	int c_words = 0, word_leng = 0;

	if (strg == NULL || strg[0] == '\0')
		return (NULL);

	c_words = word_count(strg);

	words = malloc(sizeof(char *) * (c_words + 1));
	if (words == NULL)
	{
		return (NULL);
	}

	for (i = 0; strg[i] != '\0'; ++i)
	{
		if (strg[i] != ' ')
			word_leng++;

		if ((strg[i] == ' ' && word_leng > 0) || (strg[i + 1] == '\0' && word_leng > 0))
		{
			words[j] = malloc((word_leng + 1) * sizeof(char));
			if (words[j] == NULL)
			{
				for (k = j - 1; k >= 0; k--)
					free(words[k]);

				free(words);
				return (NULL);
			}

			for (k = 0; k < word_leng; ++k)
				words[j][k] = strg[(i - word_leng) + k + 1];
			words[j][k] = '\0';
			word_leng = 0;
			j++;
		}
	}
	words[j] =  NULL;
	return (words);
}
