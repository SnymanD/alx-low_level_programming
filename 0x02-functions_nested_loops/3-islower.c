#include <main.h>
/**
 * main - A function that prints 10 times the alphabet, in lowercase.
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);

	}
	else 
	{
		return (0);
	}
	_putchar('\n');
}
