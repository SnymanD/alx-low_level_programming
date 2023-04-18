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
	int y = 0;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[x] != '\0')
	{
		x++;
	}
		s = malloc(sizeof(char) * (y + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (y = 0; str[y]; y++)
	{
		s[y] = str[y];
	}
		return (s);
}
