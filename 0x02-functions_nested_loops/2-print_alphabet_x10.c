#include "main.h"
/*
 * Description:  print_alphabet_x10 - print 10 times alphabet..
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int x;
	int y;

	for (x = 1; x <= 10; x++)
	{
		for (y = 97; y <= 122; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}
}
