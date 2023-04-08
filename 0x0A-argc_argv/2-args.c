#include "main.h"
#include <stdio.h>

/**
 * main - Show all the args
 * @argv: Argument Vector
 * @argc: Argument Count
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
		return (0);
}
