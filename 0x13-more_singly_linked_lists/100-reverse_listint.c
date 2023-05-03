#include "lists.h"
#define node listint_t

/**
 * reverse_listint - Reverses a linked list
 * @head: ...
 * Return: Pointer
 */

node *reverse_listint(node **head)
{
	node *v, *i, *next;

	v = NULL;
	i = *head;
	next = NULL;

	while (v != NULL)
	{
		next = i->next;
		i->next = v;
		v = i;
		i = next;
	}
	*head = v;
	return (v);
}
