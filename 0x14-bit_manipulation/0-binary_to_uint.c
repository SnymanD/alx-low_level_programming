#include "main.h"

/**
 * binary_to_uint - Converts a binary number to unsigned int.
 * @b: Binary number
 * Return: Integer
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int d_val = 0;
	int x;

	for (x = 0; b && b[x]; ++x)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		d_val = 2 * d_val + (b[x] - '0');
	}

	return (d_val);
}
