#include "main.h"

/**
 * create_file - File to be created
 * @filename: Create a file name to the pointer
 * @text_content: File to be wretten to a string of a pointer
 *
 * Return - -1 if the function fails
 * Otherwise return - 1.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
