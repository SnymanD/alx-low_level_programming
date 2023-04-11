#include "main.h"
#include <stdlib.h>

/**
 * _strdup - A function that returns a pointer to a newly allocated
 * space memory
 * @str: String
 * Return: _strduo or NULL
 */

char *_strdup(char *str)
{
	int x = 0;
	int y = 1;
	char *z;

	if (str == NULL)
		return (NULL);
	while (str[y])
	{
		y++;
	}
		z = malloc((sizeof(char) * y) + 1);
	if (z == NULL)
		return (NULL);
	while (x < y)
	{
		z[x] = str[x];
	}
		z[x] = '\0';
		return (z);
}
