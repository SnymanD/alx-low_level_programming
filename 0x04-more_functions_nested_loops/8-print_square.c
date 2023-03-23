#include "main.h"
/**
 * print_square - Print n square
 * @size: The number of squares
 * Return: void
 */

void print_square(int size)
{
	int u, v;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (u = 0; u < size; u++)
	{
	for (v = 0; v < size; v++)
	{
		_putchar(35);
	}
	}
		_putchar('\n');
	}
}
