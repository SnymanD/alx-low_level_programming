#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: Number of members
 * @size: Size
 * Return: NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	int x = 0, l = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	l = nmemb * size;
	s = malloc(l);

	if (s == NULL)
		return (NULL);
	while (x < l)
	{
		s[x] = 0;
		x++;
	}
		return (s);
}
