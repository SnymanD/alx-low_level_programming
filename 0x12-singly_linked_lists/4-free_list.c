#include "lists.h"

/**
 * free_list - frees a list
 * @head: A pointer to list to be freed
 * Return: ...
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
