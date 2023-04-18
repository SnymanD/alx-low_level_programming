#include "main.h"

/**
 * leet - Encodes a string to 1337
 * @str: The string to be encoded
 * Return: A pointer
 */

char *leet(char *str)
{
	int x, y;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (x = 0; str[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (str[x] == s1[y])
			{
				str[x] = s2[y];
			}
		}
	}
	return (str);
}
