#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int x = 0;
	char *str, *sep = "";
	va_list lists;

	va_start(lists, format);


	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
				printf("%s%c", sep, va_arg(lists, int));
					break;
				case 'i':
				printf("%s%d", sep, va_arg(lists, int));
					break;
				case 'f':
				printf("%s%f", sep, va_arg(lists, double));
					break;
				case 's':
				str = va_arg(lists, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", sep, str);
					break;
					default:
					x++;
					continue;
			}
				sep = ", ";
				x++;
		}
	}
				printf("\n");
				va_end(lists);
}
