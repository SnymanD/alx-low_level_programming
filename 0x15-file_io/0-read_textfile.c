#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it.
 * @letters: The NO of letters
 * @filename: Name of the File
 * Return: Number. Otherwise 0 if any errors.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int s;
	ssize_t chars_read, chars_written;
	char *buffer;

	if (!filename || !letters)
		return (0);

	s = open(filename, O_RDONLY);
	if (s == -1)
		return (0);

	buffer = malloc(letters);
	if (!buffer)
	{
		close(s);
		return (0);
	}
	chars_read = read(s, buffer, letters);
	if (chars_read == -1)
	{
		free(buffer);
		close(s);
		return (0);
	}

	chars_written = write(STDOUT_FILENO, buffer, chars_read);
	if (chars_written != chars_read)
	{
		free(buffer);
		close(s);
		return (0);
	}

	free(buffer);
	close(s);

	return (chars_written);
}
