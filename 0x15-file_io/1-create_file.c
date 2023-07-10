#include "main.h"

/**
 * create_file - Function that create a file
 * @filename: pointer to the name of the file to create
 * @text_content: pointer to a string to write to the file.
 *
 * Return: if the function fails, return -1.
 *		otherwise, return 1
 */
int create_file(const char *filename, char *text_content)
{
	int opn, wrt, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		for (len = 0; text_content[len]; len++)
			;
	
	opn = open(filename, 
}
