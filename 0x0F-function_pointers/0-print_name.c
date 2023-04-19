#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Write a function that print a name
 * @name: String
 * @f: Pointer to function
 * Return: Nothing
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
		f(name);
}
