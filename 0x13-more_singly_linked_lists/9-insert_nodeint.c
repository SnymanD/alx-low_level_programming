#include "lists.h"
#define node listint_t


/**
 * get_size - returns the number of elements
 * @h: head of the list
 * Return: number of elements
 */

size_t get_size(const listint_t *h)
{
	if (h == (void *)0)
		return (0);
	return (1 + get_size(h->next));
}

/**
 * get_node - returns the node at an index
 * @head: the head of the list
 * @index: the index of the node
 * Return: node at that index, else NULL
 */

node *get_node(node *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	return (get_node(head->next, index - 1));
}

/**
 * insert_nodeint_at_index - inserts a node at a given index
 * @head: the start of the list
 * @idx: the idx at which the new node should be inserted
 * @n: an integer
 * Return: the new element, or NULL if it failed
 */

node *insert_nodeint_at_index1(node **head, unsigned int idx, int n)
{
	node *v, *u, *num;

	if (idx > get_size(*head))
		return (NULL);
	if (idx == 0)
	{
		u = *head;
		v = NULL;
	}
	else
	{
		v = get_node(*head, idx - 1);
		u = v->next;
	}
	num = malloc(sizeof(node));
	if (num == NULL)
		return (NULL);
	num->n = n;
	v->next = num;
	num->next = u;
	return (num);
}

node *insert_nodeint_at_index(node **head, unsigned int idx, int n)
{
	unsigned int i;
	node *u, *num;

	u = *head;

	if (idx == 0)
	{
		num = malloc(sizeof(node));
		if (num == NULL)
			return (NULL);
		num->n = n;
		num->next = *head;
		*head = num;
		return (num);
	}
	for (i = 0; i < idx - 1; i++)
	{
		if (u == NULL || u->next == NULL)
			return (NULL);
		u = u->next;
	}
	num = malloc(sizeof(node));
	if (num == NULL)
		return (NULL);
	num->n = n;
	num->next = u->next;
	u->next = num;
	return (num);
}
