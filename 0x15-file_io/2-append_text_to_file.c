#include "main.h"

/**
 * append_text_to_file - function that apends text at the
 * end of a file
 * @filename: pointer to the name of the file to be appended
 * @text_content: pointer to the string to be appended
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f_desc;
	int byte_writ;
	int string_len;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		string_len = strlen(text_content);

	f_desc = open(filename, O_WRONLY | O_APPEND);
	byte_writ = write(f_desc, text_content, string_len);

	if (byte_writ == -1 || f_desc == -1)
		return (-1);

	close(f_desc);

	return (1);
}
