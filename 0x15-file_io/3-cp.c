#include "main.h"

void clos_fil(int f_desc);
char *creat_buff(char *fil);

/**
 * creat_buff - function that allocates 1024 byte for buffer.
 * @fil: Name of the file buffer
 *
 * Return: A pointer tot the buffer.
 */
char *creat_buff(char *fil)
{
	char *buffr;

	buffr = malloc(sizeof(char) * 1024);
	if (buffr == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", fil);
		exit(99);
	}
	return (buffr);
}

/**
 * clos_fil - function that closs file descriptions.
 * @f_desc: File description to be closed
 */
void clos_fil(int f_desc)
{
	int c;

	c = close(f_desc);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't close f_desc %d\n", f_desc);
		exit(100);
	}
}

/**
 * main - Function that copies the contents of a file to another file.
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers to the arguments.
 *
 * Return: on success, return 0.
 */
int main(int argc, char *argv[])
{
	int frm, t, r, w;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from the file_to\n");
		exit(97);
	}

	buff = creat_buff(argv[2]);
	frm = open(argv[1], O_RDONLY);
	r = read(frm, buff, 1024);
	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (frm == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		w = write(t, buff, r);
		if (t == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		r = read(frm, buff, 1024);
		t = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);

	free(buff);
	clos_fil(frm);
	clos_fil(t);

	return (0);
}
