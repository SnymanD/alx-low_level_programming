#include "lists.h"

/**
 * listint_len - Prints the number of elements.
 * @h: Head of the list
 * Return: ...
 */

size_t listint_len(const listint_t *h)
{
	if (h == (void *)0)
		return (0);
	return (1 + listint_len(h->next));
}
