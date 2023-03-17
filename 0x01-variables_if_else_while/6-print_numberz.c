#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Description: main - Print all single digit numbers of base 10.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int f;

	for (f = '0'; f <= '9'; f++)
	putchar(f);
	putchar('\n');

	return (0);
}
