#include "main.h"
#include <stdio.h>

/**
 * main - Show the number of args
 * @argv: Argument Vector
 * @argc: Argument Count
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	return (0);
}
