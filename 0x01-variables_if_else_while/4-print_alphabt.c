#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Description: main - Alphabet in lowercase, followed by a new line.
 * Return: Always 0 (Success)
 */

int main(void)
{
	char low_case, s, d;

	s = 'e';
	d = 'q';

	for (low_case = 'a'; low_case <= 'z'; low_case++)
	{
		if (low_case != s && low_case != d)
		putchar(low_case);
	}
		putchar('\n');
		return (0);
}


