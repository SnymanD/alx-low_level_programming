#include "main.h"
/**
 * print_numbers - Print numbers from 0 to 9
 * Return: The numbers
 */

int print_numbers(void)
{
	int u;

	for (u = 0; u <= 9; u++)
	{
		_putchar(u + '0');
	}
		_putchar('\n');
}
