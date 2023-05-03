#include "lists.h"
#define node listint_t

/**
 * add_nodeint - created a new node
 * @head: Beginning of a list
 * @n: Number
 * Return: address of the new element, or NULL
 */

node *add_nodeint(node **head, const int n)
{
	node *num;

	num = malloc(sizeof(node));
	if (num == NULL)
		return (NULL);
	num->n = n;
	num->next = *head;
	*head = num;
	return (num);
}
