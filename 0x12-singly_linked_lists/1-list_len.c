#include "lists.h"

/**
 * list_len - returns the number of elements.
 * @h: list_t list
 * Return: number of elements.
 */

size_t list_len(const list_t *h)
{
	size_t element = 0;

	while (h)
	{
		element++;
		h = h->next;
	}
		return (element);
}
