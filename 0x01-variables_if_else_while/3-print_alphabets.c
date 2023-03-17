#include <stdio.h>

/**
 * Description: main - Print alphabet in lower and upper case.
 * Return: Always 0 (Success)
 */

int main(void)
{
	char low_case;

	for (low_case = 'a'; low_case <= 'z'; low_case++)
	putchar(low_case);

	for (low_case = 'A'; low_case <= 'Z'; low_case++)
	putchar(low_case);
	putchar('\n');

	return (0);
}
