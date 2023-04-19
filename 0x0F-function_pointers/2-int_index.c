#include "function_pointers.h"
/**
 * int_index - A function that searches for an integer.
 * @array: Array
 * @size: Size of elements
 * @cmp: Pointer to function
 * Return: Always 0 (Success)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}
	return (-1);
}
