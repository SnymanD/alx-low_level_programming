#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: Pointer
 * Return: Void
 **/

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
