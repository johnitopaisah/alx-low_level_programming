#include "main.h"

/**
 * read_textfile - Function that reads a text file and prints it to
 *		the POSIX standard output
 * @filename: A pointer to the name of the file
 * @letters: The number of letters teh function should read and print
 *
 * Return: Return the actual number of bytes read, or 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buff;

	if (!filename)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, buff, letters);
	w = write(STDOUT_FILENO, buff, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(o);

	return (w);
}
