#include "variadic_functions.h"

/**
 * print_strings - Prints strings
 * @separator: The string
 * @n: The number of strings
 * @...: A variable number
 * Return: n
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	char *str;
	unsigned int x;

	va_start(list, n);


	for (x = 0; x < n; x++)
	{
		str = va_arg(list, char *);

		if (str == NULL)
			printf("(nil)");
			else
				printf("%s", str);

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
		printf("\n");
		va_end(list);
}
