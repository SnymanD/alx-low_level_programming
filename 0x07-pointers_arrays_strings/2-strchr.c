#include "main.h"
#include <stdio.h>

/**
 * _strchr - Entry Point
 * @s: Input
 * @c: Input
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] <= '\0'; x++)
	{
	if (s[x] == c)
		return (s + x);
	}
		return (NULL);
}
