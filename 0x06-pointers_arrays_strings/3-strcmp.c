#include "main.h"

/**
 * _strcmp - Compares pointers
 * @s1: 1st string pointer
 * @s2: 2nd string pointer
 * Return: if str1 < str2, The negative difference
 * if str1 == str2, 0.
 * if str1 > str2, The positive difference
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
		return (*s1 - *s2);
}
