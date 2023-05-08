#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - Creates a file
 * @filename: Name of the file
 * @text_content: String
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
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

	s = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0644);
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
