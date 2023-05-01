#include "main.h"

/**
 * _strlen - function to returns the length of a string
 * @strg: String to check the length
 *
 * Return: the length of the string
 */
int _strlen(char *strg)
{
	if (*strg == '\0')
		return (0);
	else
		return (_strlen(strg + 1) + 1);
}


/**
 * _is_palindrome - helping th main is_palindrome function
 * @strg: string to be checked
 * @lef: left index of the substring that is being examined
 * @righ: thw right index
 *
 * Return: 1 if strg is palindrome.
 */
int _is_palindrome(char *strg, int lef, int righ)
{
	if (lef >= righ)
		return (1);

	if (strg[lef] != strg[righ])
		return (0);

	return (_is_palindrome(strg, lef + 1, righ - 1));
}


/**
 * is_palindrome - function to check id a string is a palindrome
 * @strg: The string to be checked
 *
 * Return: Return 1 upon success and 0 otherwise
 */
int is_palindrome(char *strg)
{
	int leng;

	leng = _strlen(strg);
	if (leng == 0)
		return (1);

	return (_is_palindrome(strg, 0, leng - 1));
}
