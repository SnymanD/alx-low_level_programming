#include "main.h"
/**
 * main - Prints a fizz buzz program
 * Return: Always 0 (Success)
 */

int main(void)
{
	int u;

	for (u = 1; u <= 100; u++)
	{
	if ((u % 3 == 0) && (u % 5 == 0))
	{
		printf("FizzBuzz");
	}
	else if (u % 3 == 0)
	{
		printf("Fizz");
	}
	else if (u % 5 == 0)
	{
		prinf("Buzz");
	}
	else
	{
		printf("%d", u);
	}
	if (u != 100)
	{
		printf(" ");
	}
	}
		printf('\n');
		return (0);
}
