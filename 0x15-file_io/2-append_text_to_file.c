#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fw, strlen = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[strlen])
			strlen++;
	}

	fd = open(filename, O_RDWR | O_APPEND);
	fw = write(fd, text_content, strlen);

	if (fd < 0 || fw < 0)
		return (-1);

	close(fd);
	return (1);
}
