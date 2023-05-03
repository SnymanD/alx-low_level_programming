#include "lists.h"
#define node listint_t

/**
 * pop_listint - Deletes the head node of a list
 * @head: Head
 * Return: Number
 */
int pop_listint(node **head)
{
	node *u;
	int v;

	if (*head == NULL)
		return (0);

	u = *head;
	v = (*head)->n;
	*head = (*head)->next;
	free(u);
	return (v);
}
