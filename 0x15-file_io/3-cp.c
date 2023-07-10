#include "main.h"

/**
 * create_buffer - function that allocates 1024 bytes for a buffer
 * @fil: name of the file buffer is storing chars for
 *
 * Return: pointer to the newly-allocated buffer
 */
char *create_buffer(char *fil)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", fil);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - function that close file
 * @fd: the file descriptor to be closed
 *
 * Return: Nothing
 */
void close_file(int fd)
{
	int d;

	d = close(fd);

	if (d == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - function that copies the content of a file to another file
 * @ac: the argument count
 * @av: the argument vector
 *
 * Description: If the argument count is incorrect - exit code 97
 *		If file_from does not exist or cannot be read - exit code 98
 *		If file_to cannot be created or written to - exit code 99
 *		If file_to or file_from cannot be closed - exit code 100
 *
 * Return: Return 0 on success.
 */
int main(int ac, char *av[])
{
	int from, to, rd, wrt;
	char *buffer;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(av[2]);
	from = open(av[1], O_RDONLY);
	rd = read(from, buffer, 1024);
	to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || rd == -1)
		{
			dprintf(2, "Error: Can't read from file %s\n", av[1]);
			free(buffer);
			exit(98);
		}

		wrt = write(to, buffer, rd);
		if (to == -1 || wrt == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			free(buffer);
			exit(99);
		}

		rd = read(from, buffer, 1024);
		to = open(av[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
