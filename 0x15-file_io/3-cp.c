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
 * @arg: additional arguments for the format
 */

void error_exit(int exit_code, const char *format, *arg)
{
	dprintf(STDERR_FILENO, format, arg);
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
	ssize_t read_bytes, nchars;

	if (argc != 3)
	{
		error_exit(97, "Usage: cp file_from file_to\n");
	}

	fd_from = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);

	if (fd_from == -1 || fd_to == -1)
	{
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);
	}

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(fd_from, buffer, 1024);
		if (nchars == -1)
		{
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
		}
		read_bytes = write(fd_to, buffer, nchars);
		if (read_bytes == -1)
		{
			error_exit(99, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	rwr = close(fd_from);
	if (rwr == -1)
	{
		error_exit(100, "Error: Can't close fd %d\n", fd_from);
	}

	rwr = close(fd_to);
	if (rwr == -1)
	{
		error_exit(100, "Error: Can't close fd %d\n", fd_to);
	}

	return (0);
}
