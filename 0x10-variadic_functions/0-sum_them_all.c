#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum
 * @n: The number of parameters
 * @...: A variable number of parameters
 * Return: n
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list w;
	unsigned int x, sum = 0;

	va_start(w, n);

	for (x = 0; x < n; x++)
	sum += va_arg(w, int);
	va_end(w);
	return (sum);
}
