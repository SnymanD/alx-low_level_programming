#include "lists.h"

/**
 * print_listint - Prints all the elements
 * @h: Head of the list
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	if (h == NULL)
		return (0);
	printf("%d\n", h->n);
	return (1 + print_listint(h->next));
}
