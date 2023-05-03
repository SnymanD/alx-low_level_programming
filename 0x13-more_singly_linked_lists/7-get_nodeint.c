#include "lists.h"
#define node listint_t

/**
 * get_nodeint_at_index - Prinbts the node
 * @head: Head
 * @index: ...
 * Return: node or NULL
 */

node *get_nodeint_at_index(node *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	return (get_nodeint_at_index(head->adjacent, index - 1));
}
