#include "main.h"

/**
 * _strncpy - Copies inputted number
 * @dest: Buffer storing string copy
 * @src: Source string
 * @n: Max bytes to be copied
 * Return: Pointer to resulting string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];
	for (index = src_len; index < n; index++)
		dest[index] = '\0';
	return (dest);
}
