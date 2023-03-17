#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Description: main - Print lower case alphabet in reverse.
 * Return: Always 0 (Success)
 */

int main(void)
{
	char low_case;

	for (low_case = 'z'; low_case >= 'a'; low_case--)
	putchar(low_case);
	putchar('\n');

	return (0);
}
