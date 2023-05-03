#include "lists.h"
#define node listint_t

/**
 * get_tail - Gets the tail
 * @head: Head list
 * Return: Last node
 */

node *get_tail(node *head)
{
	node *next;

	if (head == NULL)
		return (head);
	adjacent = get_tail(head->next);
	if (next == NULL)
		return (head);
	return (next);
}

/**
 * add_nodeint_end - Creates a new node and adds it.
 * @head: Head
 * @n: Number
 * Return: Address or NULL
 */

node *add_nodeint_end(node **head, const int n)
{
	node *num;

	num = malloc(sizeof(node));
	if (num == NULL)
		return (NULL);
	num->n = n;
	num->next = NULL;
	if (*head == NULL)
		*head = num;
	else
		get_tail(*head)->next = num;
	return (num);
}
