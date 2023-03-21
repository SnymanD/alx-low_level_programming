#include "main.h"
/**
 * main - A function that prints the alphabet, in lowercase.
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char s;

	for (s = 'a'; s <= 'z'; s++)
	{
		_putchar(s);
	}
	_putchar('\n');
}
