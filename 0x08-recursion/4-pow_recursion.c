#include "main.h"

/**
 * _pow_recursion - Prints x raised to the power of y
 * @x: The int to be raised on
 * @y: The int raised to x
 * Return: Results
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
		return (x * _pow_recursion(x, y - 1));
}
