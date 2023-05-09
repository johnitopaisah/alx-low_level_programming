#include "main.h"

/**
 * read_textfile - function that reads a test file and
 * prints it to the POSEX standard output.
 * @filename: the file to be read and printed
 * @letters: the number of letters read
 *
 * Return: Return the actual number of letters read on success, 0 otherwise.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t byte_read;
	ssize_t tid;
	ssize_t f_dir;
	char *buffer;

	f_dir = open(filename, O_RDONLY);
	if (f_dir == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	tid = read(f_dir, buffer, letters);
	byte_read = write(STDOUT_FILENO, buffer, tid);

	free(buffer);
	close(f_dir);
	return (byte_read);
}
