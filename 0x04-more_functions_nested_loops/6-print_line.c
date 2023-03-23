#include "main.h"
/**
 * print_line - Draw a straight line
 * @n: The numebr of lines to draw
 * Return: void
 */

void print_line(int n)
{
	int u;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (u = 0; u < n; u++)
	{
		_putchar(95);
	}
	}
	_putchar('\n');
}
