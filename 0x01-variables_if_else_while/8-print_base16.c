#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Description: main - Print all numbers of base 16.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int s;
	char low_case;

	for (s = '0'; s <= '9'; s++)
	putchar(s);

	for (low_case = 'a'; low_case <= 'z'; low_case++)
	putchar(low_case);
	putchar('\n');

	return (0);
}
