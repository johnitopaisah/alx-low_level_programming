#include "main.h"

/**
 * read_textfile - function that reads a text file and
 *		prints it to the POSIX standard output.
 * @filename: pointer to the filepath to be opened
 * @letters: size of the the letters to be printed
 *
 * Return: Return the actual number of letters read and printed on success.
 *		Return 0 if it fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opn, rd, wrt;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	opn = open(filename, O_RDONLY);
	rd = read(opn, buff, letters);
	wrt = write(STDOUT_FILENO, buff, rd);

	if (opn == -1 || rd == -1 || wrt == rd)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(opn);

	return (wrt);
}
