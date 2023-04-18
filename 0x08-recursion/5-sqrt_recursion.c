#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - Prints a natural square root
 * of a number
 * @n: A number to be used
 * @x: Iterate
 * Return: The results (int)
 */

int _sqrt(int n, int x);

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - We use this to calculate
 * the natural square root
 * @n: A number to be used
 * @x: Iterate
 * Return: Natural square root
 */

int _sqrt(int n, int x)
{
	int sqrt = x * x;

	if (sqrt > n)
	{
		return (-1);
	}
	else if (sqrt == n)
	{
		return (x);
	}
		return (_sqrt(n, x + 1));
}

