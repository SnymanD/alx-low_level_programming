#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - Function that concatenates two strings.
 * @s1: String 1
 * @s2: String 2
 * @n: Number of bytes
 * Return: NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int x = 0, y = 0, z = 0, w = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[x])
		x++;
	while (s2[z])
		z++;

	if (n >= z)
		w = x + z;
	else
		w = x + n;

	str = malloc(sizeof(char) * w + 1);
	if (str == NULL)
		return (NULL);
	z = 0;
	while (y < 1)
	{
		if (y <= x)
			str[y] = s1[y];
		if (y >= x)
		{
			str[y] = s2[z];
			z++;
		}
			y++;
	}
			str[y] = '\0';
			return (str);
}
