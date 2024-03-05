#include "main.h"

/**
 * close_handler - function to handle close eerors
 * @src: source file
 * @dest: destination file
 * Return: nothing
 */
void close_handler(int src, int dest)
{
	int code;

	code = close(src);
	if (code == FILE_ERROR)
	{
		dprintf(2, "Error: Can't close fd %d\n", src);
		exit(CANNOT_CLOSE);
	}
	code = close(dest);
	if (code == FILE_ERROR)
	{
		dprintf(2, "Error: Can't close fd %d\n", dest);
		exit(CANNOT_CLOSE);
	}
}

/**
 * error_handler - function to handle the file errors
 * @dest: destination file
 * @src: source file
 * @av: argument values
 *
 * Return: nothing
 */
void error_handler(int src, int dest, char **av)
{
	if (src == FILE_ERROR)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(DOES_NOT_EXIST_OR_UNABLE_TO_READ);
	}
	if (dest == FILE_ERROR)
	{
		dprintf(2, "Error: Can't write to file %s\n", av[2]);
		exit(CANNOT_CREATE_OR_WRITE);
	}
}

/**
 * main - copies the content of a file to anoter file
 * @ac: the argument count
 * @av: the argument vector
 *
 * Return: Return 0 on success or anything else on error
 */
int main(int ac, char **av)
{
	int src, dest;
	char buffer[BUFFER_SIZE];
	ssize_t r, w;

	if (ac != ARGUMENT_COUNT_EXPECTED)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(INVALID_NUMBER_OF_ARGUMENTS);
	}
	src = open(av[1], O_RDONLY);
	dest = open(av[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_handler(src, dest, av);
	r =  BUFFER_SIZE;

	while (r == BUFFER_SIZE)
	{
		r = read(src, buffer, BUFFER_SIZE);
		if (r == FILE_ERROR)
			error_handler(FILE_ERROR, 0, av);
		w = write(dest, buffer, r);
		if (w == FILE_ERROR)
			error_handler(0, FILE_ERROR, av);
	}

	close_handler(src, dest);
	return (0);
}
