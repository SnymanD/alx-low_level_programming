#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Description: main - Print different combinations.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d, r;

	for (d = '0'; d < '9'; d++)
	{
	for (r = d + 1; r <= '9'; r++)
	{
		if (r != d)
	{
		putchar(d);
		putchar(r);

		if (d == '8' && r == '9')
		continue;
		putchar(',');
		putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
