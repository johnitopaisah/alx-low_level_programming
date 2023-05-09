#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file to be created
 * @text_content: Pointer to string to write the file
 *
 * Return: 1 on success or -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int f_desc;
	int byte_writ;
	int string_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[string_len])
			string_len++;
	}

	f_desc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	byte_writ = write(f_desc, text_content, string_len);

	if (f_desc == -1 || byte_writ == -1)
		return (-1);

	close(f_desc);

	return (1);
}
