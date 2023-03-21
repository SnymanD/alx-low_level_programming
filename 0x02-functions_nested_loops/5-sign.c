#include "main.h"
/**
 * Description: print_sign - Prints the sign of a number
 * @n: The character we are looking for
 * Return: 1 if n greater than zero, 0 for n = zero and -1 for n less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
