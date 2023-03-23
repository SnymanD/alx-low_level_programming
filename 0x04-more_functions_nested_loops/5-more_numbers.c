#include "main.h"
/**
 * more_numbers - Print 10 times numbers from 0 to 14
 * Return: 10 times those numbers
 */

void more_numbers(void)
{
	int u = 0;
	int v;

	for (; u <= 10; u++)
	{
	for (v = 0; v <= 14; v++)
	{
	if (v > 0)
	{
		_putchar((v / 10) + '0');
	}
		_putchar((v % 10) + '0');
	}
	}
		_putchar('\n');
}
