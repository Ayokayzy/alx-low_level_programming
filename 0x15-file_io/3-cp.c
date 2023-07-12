#include "main.h"

/**
 * main - Entry point
 * @argc: the number of argument passes to the function
 * @argv: a poiinter to an array of arguments
 * description: a program that copies the content of a file to another file.
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int fd_to, fd_from, fw, fr, c_from, c_to;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	fd_to = open(argv[2], O_CREAT | O_RDWR | O_TRUNC, 0664);

	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(98);
	}

	buff = malloc(sizeof(char) * 1024);

	while (fr == 1024)
	{
		fr = read(fd_from, buff, 1024);

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
	}

	free(buff);
	c_from = close(fd_from);
	c_to = close(fd_to);

	if (c_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", c_from);
		exit(100);
	}

	if (c_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", c_to);
		exit(98);
	}

	return (0);
}
