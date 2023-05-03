#include "lists.h"
#define node listint_t

/**
 * reverse_listint - Reverses a linked list
 * @head: ...
 * Return: Pointer
 */

node *reverse_listint(node **head)
{
	node *v, *i, *adjacent;

	v = NULL;
	i = *head;
	adjacent = NULL;

	while (v != NULL)
	{
		adjacent = i->adjacent;
		i->adjacent = v;
		v = i;
		i = adjacent;
	}
	*head = v;
	return (v);
}
