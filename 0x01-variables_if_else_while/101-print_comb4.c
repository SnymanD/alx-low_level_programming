#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Description: main - I am tired now.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x, y, z;

	for (x = '0'; x < '9'; x++)
	{
	for (y = x + 1; y <= '9'; y++)
	{
	for (z = y + 1; z <= '9'; z++)
	{
		if ((y != x) != z)
	{
		putchar(x);
		putchar(y);
		putchar(z);

		if (x == '7' && y == '8')
		continue;
		putchar(',');
		putchar(' ');
	}
	}
	}
	}
		putchar('\n');
		return (0);
}
