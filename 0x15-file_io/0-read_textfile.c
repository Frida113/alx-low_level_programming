#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>

/**
 * read_textfile - reads a textfile and prints it
 * @filename: pointer
 * @letters: letters to be printed
 * Return: the actual number of letters it should read and print:
 * return 0 if: the file can not be opened or opened
 * if filename is NULL
 * or if write fails or does not write expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = (char *)malloc(sizeof(char) * letters);

	if (!buf)
	{
		close(fd);
		return (0);
	}

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);
	free(buf);

	return (nwr);

}
