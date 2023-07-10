#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: ...
 * @text_content: ...
 * Return: 1 for success or -1 if fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int no_lt;
	int wrt;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (no_lt = 0; text_content[no_lt]; no_lt++)
			;

		wrt = write(fd, text_content, no_lt);

		if (wrt == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
