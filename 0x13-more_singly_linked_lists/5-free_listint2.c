#include "lists.h"
#define node listint_t

/**
 * free_listint2 - Frees a list
 * @head: Head of the list
 * Return: Void
 */

void free_listint2(node **head)
{
	if (head == NULL || *head == NULL)
		return;
	free_listint2(&((*head)->next));
	free(*head);
	*head = NULL;
}
