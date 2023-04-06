#include "main.h"

/**
 * factorial - Prints a factorial of a given number
 * @n: A given number
 * Return: A factorial (int)
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
		return (n * factorial(n - 1));
}
