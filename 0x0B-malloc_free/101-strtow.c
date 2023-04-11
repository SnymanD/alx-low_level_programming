#include "main.h"
#include <stdlib.h>

/**
 * word_len - Index marking
 * @str: String
 * Return: Index marking
 */

int word_len(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}
		return (len);
}
/**
 * count_words - Count number of words
 * @str: String
 * Return: Number of words
 */

int count_words(char *str)
{
	int index = 0, words = 0, len = 0;

	for (index = 0; *(str + index); index++)
		len++;
	for (index = 0; index < len; index++)
	{
		if (*(str + index) != ' ')
		{
			words++;
			index += word_len(str + index);
		}
	}
		return (words);
}
/**
 * strtow - Splits a string into words
 * @str: String
 * Return: NULL
 */

char **strtow(char *str)
{
	char **strings;
	int index = 0, words, u, letters, v;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	words = count_words(str);
	if (words == 0)
		return (NULL);
	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);
	for (u = 0; u < words; u++)
	{
		while (str[index] == ' ')
			index++;
		letters = word_len(str + index);
		strings[u] = malloc(sizeof(char) * (letters + 1));
		if (strings[u] == NULL)
		{
			for (; u >= 0; u--)
				free(strings[u]);
			free(strings);
			return (NULL);
		}
		for (v = 0; v < letters; v++)
			strings[u][v] = str[index++];
		strings[u][v] = '\0';
	}
		strings[u] = NULL;
		return (strings);
}
