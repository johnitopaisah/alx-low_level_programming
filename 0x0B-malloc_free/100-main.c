#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that concatenates all the arguments of program
 * @ac: argument counter
 * @av: pointer to the argument vector
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
	char *s;

	s = argstostr(ac, av);
	if a == (NULL)
	{
		return (1);
	}
	printf("%s", s);
	free(s);
	return (0);
}
