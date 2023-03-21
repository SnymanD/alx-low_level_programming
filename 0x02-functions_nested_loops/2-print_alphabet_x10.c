#include "main.h"
/**
 * Description: print_alphabet_x10 - Print 10 times alphabet.
 * Return: void
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
