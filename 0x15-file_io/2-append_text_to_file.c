#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Name of the file
 * @text_content: Content of the file
 * Return: 1 if successful, -1 if failed
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int s;
	size_t length = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		while (text_content[length])
			length++;
	}

	s = open(filename, O_WRONLY | O_APPEND);
	if (s == -1)
		return (-1);

	if (length > 0)
	{
		ssize_t bytes_written = write(s, text_content, length);

		if (bytes_written == -1)
		{
			close(s);
			return (-1);
		}
	}

	close(s);
	return (1);
}
