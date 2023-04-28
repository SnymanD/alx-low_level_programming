#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements.
 * @h: list_t list.
 * Return: the number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
