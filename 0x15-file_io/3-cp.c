#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * cpy - Helper function that copies content
 * @src: source file
 * @dest: destination file
 * Return: ...
 */

#define BUFFER_SIZE 1024

void cpy(file_t *src, file_t *dest)
{
	char buffer[BUFFER_SIZE];
	ssize_t char_u, char_v;

	while ((char_u = read(src->fd, buffer, BUFFER_SIZE)) > 0)
	{
		char_v = write(dest->fd, buffer, char_u);
		if (char_v == -1)
		{
			perror("Error: Can't write");
			exit(99);
		}
	}

	if (char_u == -1)
	{
		perror("Error: Can't read");
		exit(98);
	}
}
/**
 * main - Entry point to the program.
 * @x: Number of argument
 * @y: List of argument
 * return: number
 *
 * Description: Program that copies the content
 */

int main(int x, char *y[])
{
	if (x != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_t src; 
	file_t dest;

	src.name = y[1];
	dest.name = y[2];

	src.fd = open(src.name, O_RDONLY);
	if (src.fd == -1)
	{
		perror("Error: Can't read");
		exit(98);
	}

	dest.fd = open(dest.name, O_WRONLY | O_TRUNC | O_CREAT, 0644);
	if (dest.fd == -1)
	{
		close(src.fd);
		perror("Error: Can't write");
		exit(99);
	}

	cpy(&src, &dest);

	if (close(src.fd) == -1)
	{
		perror("Error: Can't close source file");
		exit(100);
	}

	if (close(dest.fd) == -1)
	{
		perror("Error: Can't close destination file");
		exit(100);
	}

	exit(0);
}
