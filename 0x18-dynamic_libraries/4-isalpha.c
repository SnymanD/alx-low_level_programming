#include "main.h"
/**
 * Description: _isalpha - a function that checks for alphabetic character.
 * @c: The character to be checked
 * Return: 1 if c is lower 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122)
	|| (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
