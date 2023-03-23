#include "main.h"

/**
 * largest_number - returns the largest number
 * @a: The first number
 * @b: The second number
 * @c: The third number
 * Returns: larger number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (a > b && c > a)
	{
		largest = c;
	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
