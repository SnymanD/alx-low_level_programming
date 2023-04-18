#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - Print 1 if the input is a prime
 * integer otherwise return 0
 * @n: The integer
 * @x: Iteration
 * Return: integer
 */
int check_prime(int n, int x);

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - Check if an integer is prime or not
 * @n: Integer
 * @x: Iteration (Number of Iterations)
 * Return: 1 or 0
 */

int check_prime(int n, int x)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n % x == 0 && x > 1)
	{
		return (0);
	}
	else if ((n / x) < x)
	{
		return (1);
	}
		return (check_prime(n, x + 1));
}

