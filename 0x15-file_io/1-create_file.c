#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: the name of the file to create
 * @text_context: a NULL terminated string to write to the file
 * Returns: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, fw, strlen = 0;

	if (text_content != NULL)
	{
		while(*text_content++)
			strlen++;
	}
	/* printf("strlen %ld", strlen); */
	if (filename == NULL)
		return(-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	fw = write(fd, text_content, strlen);

	if (fw < 0 || fd < 0)
		return (-1);

	close(fd);
	return (1);
}
