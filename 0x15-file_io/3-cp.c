#include "main.h"

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Entry point
 * @argc: the number of argument passes to the function
 * @argv: a poiinter to an array of arguments
 * description: a program that copies the content of a file to another file.
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int fd_to, fd_from, fw, fr;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	buff = create_buffer(argv[2]);
	fr = read(fd_from, buff, 1024);

	while (fr > 0)
	{
		if (fd_from == -1 || fr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		fw = write(fd_to, buff, fr);
		if (fd_to == -1 || fw == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		fr = read(fd_from, buff, 1024);
		fd_to = open(argv[2], O_APPEND | O_WRONLY);
	}

	free(buff);
	close_file(fd_from);
	close_file(fd_to);

	return (0);
}
