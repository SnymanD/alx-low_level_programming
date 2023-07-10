#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: No
 * @letters: No of Letters
 * Return: returns 0 otherwise no of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n1, n2;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	n1 = read(fd, buf, letters);
	n2 = write(STDOUT_FILENO, buf, n1);

	close(fd);

	free(buf);

	return (n2);
}
