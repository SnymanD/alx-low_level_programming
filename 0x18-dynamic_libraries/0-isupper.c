#include "main.h"
/**
 * _isupper - Chech if a letter is uppercase or not
 * @x: The number to be checked
 * Return: 1 for uppercase and 0 for any other
 */

int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
		return (0);
}
