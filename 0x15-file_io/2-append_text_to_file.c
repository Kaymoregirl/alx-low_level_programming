#include "main.h"

/**
 * append_text_to_file - Add text at the end of a file.
 * @filename: file name to the pointer
 * @text_content: Add the string at the end of the file.
 *
 * Return: Return - -1 if the function fails or filename is NULL
 * and if the file does not exist the user lacks write permissions - -1.
 * Otherwise return - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content !=
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
