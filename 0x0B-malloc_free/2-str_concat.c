#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Write a function that concatenates two strings
 * @s1: String 1
 * @s2: String 2
 * Return: NULL
 */

char *str_concat(char *s1, char *s2)
{
	int x = 0, y = 0, z = 0, w = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[x])
		x++;
	while (s2[y])
		y++;
	w = x + y;
	s = malloc((sizeof(char) * w) + 1);
	if (s == NULL)
		return (NULL);
	y = 0;
	while (z < w)
	{
		if (z <= x)
			s[z] = s1[z];
		if (z >= x)
		{
			s[z] = s2[y];
			y++;
		}
			z++;
	}
		s[z] = '\0';
		return (s);
}
