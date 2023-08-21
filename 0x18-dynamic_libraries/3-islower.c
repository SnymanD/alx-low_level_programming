#include "main.h"
/**
 * Description: _islower - A function that checks for lowe case.
 * @c: The character to be checked
 * Return: 1 if c is lower or 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);

	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
