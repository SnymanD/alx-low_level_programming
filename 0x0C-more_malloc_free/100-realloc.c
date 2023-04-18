#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - Function that reallocates a memory block using malloc
 * @ptr: Pointer
 * @old_size: Old size
 * @new_size: New size
 * Return: NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int x;
	char *uptr;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		uptr = malloc(new_size);

		if (uptr == NULL)
			return (NULL);

		return (uptr);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
		uptr = malloc(new_size);
	if (uptr == NULL)
		return (NULL);
	for (x = 0; x < old_size && x < new_size; x++)
	{
		uptr[x] = ((char *) ptr)[x];
	}
		free(ptr);
		return (uptr);
}
