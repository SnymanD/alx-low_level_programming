#include "lists.h"
#define node listint_t

/**
 * delete_nodeint_at_index - Deletes a node at a given index
 * @head: head of the list
 * @index: index
 * Return: 1 or -1
 */
int delete_nodeint_at_index(node **head, unsigned int index)
{
	unsigned int x;
	node *u, *uu;

	u = *head;

	if (index == 0)
	{
		if (u == NULL)
			return (-1);
		*head = u->next;
		free(u);
		return (1);
	}
	for (x = 0; x < index - 1; x++)
	{
		if (!(u && u->next))
			return (-1);
		u = u->next;
	}
	uu = u->next;
	u->next = u->next->next;
	free(uu);
	return (1);
}
