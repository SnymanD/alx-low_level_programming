#include "main.h"
#include <stdio.h>

/**
 * _strspn -Entry Point
 * @s: Input
 * @accept: Input
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y, value, check;

	value = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		check = 0;
	for (y = 0; accept[y] != '\0'; y++)
	{
	if (accept[y] == s[x])
	{
		value++;
		check = 1;
	}
	}
	if (check == 0)
	{
	}
	}
	return (0);
}
