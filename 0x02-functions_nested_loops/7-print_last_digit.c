#include <main.h>
/**
 * main - a function that prints the last digit of a number.
 * Return last digit
 */

int print_last_digit(int x)
{
	int n;
	
	n = n % 10
	if (n < 0)
	{
		_putchar(-n + 48);
		return (-n);
	}
	else
	{
		_putchar(n + 48);
		return (n);
	}
	_puthchar('\n');
}
