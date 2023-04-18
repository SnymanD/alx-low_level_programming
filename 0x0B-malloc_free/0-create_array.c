#include <stdlib.h>
#include "main.h"

/**
 * create_array - create an array of chars
 * and initializes it with a specific char
 * @size: Size of an array
 * @c: Char
 * Return: Pointer to array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int x;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
	{
		s[x] = c;
	}
		return (s);
}
