#include "main.h"
/**
 * Descriptio: _abs - Function that computes absolute value.
 * @x: The character to be checked
 * Return: Absolute value
 */

int _abs(int x)
{
	if (x >= 0)
	{
		return (x);
	}
	else
	{
		return (x * -1);
	}
	_putchar('\n');
}

