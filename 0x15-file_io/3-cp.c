#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - prints error message and exits with given exit code
 * @exit_code: exit code
 * @format: format of error messge
 * @...: additional arguments for the format
 */

void error_exit(int exit_code, const char *format, ...)
{
	va_list args;
	va_start(args, format);
	dprintf(STDERR_FILENO, "Error: ");
	vdprintf(STDERR_FILENO, format, args);
	va_end(args);
	exit(exit_code);
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 97-100 0n failure
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to, rwr;
	char buffer[BUFFER_SIZE];
	ssize_t read_bytes;

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to\n");

	fd_from = open(argv[1], O_RDONLY);

	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);

	if (fd_to = -1)
		error_exit(99, "Error: Can't write to %s\n", argv[2]);

	while ((read_bytes = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		rwr = write(fd_to, buffer, read_bytes);

		if (rwr != read_bytes)
			error_exit(99, "Error: Can't write to %s\n", argv[2]);
	}

	if (read_bytes == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	if (close(fd_from) == -1)
		error_exit(100, "Error: Can't close fd %d\n", fd_from);

	if (close(fd_to) == -1)
		error_exit(100, "Error: Can't close fd %d\n", fd_to);

	return (0);
}
