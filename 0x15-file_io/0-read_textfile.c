#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints
 * it to the POSIX standard output.
 * @filename: the file towe want to read from
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rd, wr;
	char *c = malloc(sizeof(char) * letters + 10);

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	rd = read(fd, c, letters);
	if (rd < 0)
		return (0);
	wr = write(STDOUT_FILENO, c, rd);
	if (wr < 0)
		return (0);

	free(c);
	close(fd);
	return (wr);
}
