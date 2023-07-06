#include "main.h"

/**
 * set_bit - Sets a bit at a given index to 1
 * @n: Pointer
 * @index: Index
 * Return: 1 for success or  -1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
