#include "main.h"
/**
 * print_diagonal - Draw a diagonal
 * @n: The number of times ro print a diagonal
 * Return: void
 */

void print_diagonal(int n)
{
	int u, v;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (u = 0; u < n; u++)
	{
	for (v = 0; v < u; v++)
	{
		_putchar(32);
	}
		_putchar(92);
	}
		_putchar('\n');
	}
}

