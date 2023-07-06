#include "main.h"

/**
 * print_binary - Returns the binary
 * @n: number to print in binary
 */

void print_binary(unsigned long int n)
{
	int count = 0;
	int x;
	unsigned long int curr;

	for (x = 63; x >= 0; x--)
	{
		curr = n >> x;

		if (curr & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
