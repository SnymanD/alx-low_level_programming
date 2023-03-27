#include "main.h"
/**
 * print_line - Draw a straight line
 * @n: The numebr of lines to draw
 * Return: void
 */

void print_line(int n)
{
	int u;

	for (u = 0; u < n; u++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
