#include "main.h"
/**
 * print_triangle - Print triagle of squares
 * @size: The size of the triangle
 * Return: null
 */

void print_triangle(int size)
{
	int u, v, w;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (u = 0; u < size; u++)
	{
	for (v = size - u; v > 1; v--)
	{
		_putchar(32)
	}
	for (w = 0; w <= u; w++)
	{
		_putchar(35);
	}
		_putchar'\n');
	}
	}
}

