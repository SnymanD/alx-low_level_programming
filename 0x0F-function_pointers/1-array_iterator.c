#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - A function given as a parameter on each element.
 * @array: array
 * @size: Size of elements
 * @action: Pointer to print
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
