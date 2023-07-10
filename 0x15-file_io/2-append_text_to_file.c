#include "main.h"

/**
 * append_text_to_file - Function that append text to file
 * @filename: the string to add to the end of the file
 * @text_content: the string to add to the end fo the file.
 *
 * Return: if the function fails or filename is NULL, return -1
 *	if the file does not exist the user lacks permissions, return -1
 *	otherwise return 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int opn, wrt, len;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
	}

	opn = open(filename, O_WRONLY | O_APPEND);
	wrt = write(opn, text_content, len);

	if (opn == -1 || wrt == -1)
		return (-1);

	close(opn);
	return (1);
}
