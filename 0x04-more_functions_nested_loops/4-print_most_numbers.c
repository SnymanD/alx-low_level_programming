#include "main.h"
/**
 * Description: print_most_numbers - Print numbers from 0 to 9
 * Description: Print numbers excluding 2 and 4
 * Return: numbers from 0 to 9
 */

void print_most_numbers(void)
{
	int u = 0;

	for (; u <= 9; u++)
	{
	if (u == 2 || u == 4)
	{
		continue;
	}
	else
	{
		_putchar(u + '0');
	}
	}
	_putchar('\n');
}
