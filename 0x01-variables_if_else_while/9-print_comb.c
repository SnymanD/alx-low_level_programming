#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * Description: main - Print all possible combinations.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int f;

	for (f = '0'; f <= '9'; f++)
	{
		putchar(f);
	if (f != '9')
	{
		putchar(',');
		putchar(' ');
	}
	}
		putchar('\n');

	return (0);
}

