#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end.
 * @head: Double pointer to list_t list
 * @str: string to add
 * Return: address of the new element, otherwise NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp = *head;
	int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = new;

	return (new);
}
