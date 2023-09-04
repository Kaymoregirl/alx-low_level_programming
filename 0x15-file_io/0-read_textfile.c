#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Print text file to standoutoutput and read it
 * @filename: text file to be read
 * @letters: Read the number of letters
 * Return: w- Read and print the actual bytes of numbers
 * Return 0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		if (fd == -1)
			buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
