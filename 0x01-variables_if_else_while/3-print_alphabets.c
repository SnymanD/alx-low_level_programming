#include <stdio.h>

/**
 * Description: main - Print alphabet in lower and upper case.
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lower_case;

	for (lower_case = 'a'; lower_case <= 'Z'; lower_case++)
		putchar(lower_case);

	for (lower_case = 'A'; lower_case <= 'Z'; lower_case++)
	putchar(lower_case);
	putchar('\n');

	return (0);
}
