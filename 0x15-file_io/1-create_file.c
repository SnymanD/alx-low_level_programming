#include "main.h"

/**
 * create_file - Creates a file
 * @filename: ...
 * @text_content: ...
 * Return: 1 for success. -1 for fail.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int no_lt;
	int wrt;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (no_lt = 0; text_content[no_lt]; no_lt++)
		;

	wrt = write(fd, text_content, no_lt);

	if (wrt == -1)
		return (-1);

	close(fd);

	return (1);
}
