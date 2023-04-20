#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers
 * @separator: The string
 * @n: The number of integers
 * @...: A variable number
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int x;


	va_start(num, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(num, int));

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
		printf("\n");
		va_end(num);
}
