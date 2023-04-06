#include "main.h"
/**
 * _strlen_recursion - Prints the length of a string
 * @s: String
 * Return: Length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * comparator - Compares each character
 * @s: String
 * @u: Small Iterator
 * @v: Big Iterator
 * Return: .
 */
int comparator(char *s, int u, int v)
{
	if (*(s + u) == *(s + v))
	{
		if (u == v || u == v + 1)
			return (1);
		return (0 + comparator(s, u + 1, v - 1));
	}
	return (0);
}
/**
 * is_palindrome - looks if a string is a palindrome
 * @s: String
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
