#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Write a function that prints a name
 * @name: Name to print
 * @f: Pointer to function
 * Return: Nothing
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
