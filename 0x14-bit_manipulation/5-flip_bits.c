#include "main.h"
#include <limits.h>
/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	int x;
	unsigned long int exclusive = n ^ m;
	unsigned int num_bits = sizeof(unsigned long int) * CHAR_BIT;

	for (x = num_bits - 1; x >= 0; x--)
	{
		if ((exclusive >> x) & 1)
			count++;
	}

	return (count);
}
