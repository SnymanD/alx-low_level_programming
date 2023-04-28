#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning.
 * @head: double pointer to list_t list.
 * @str: New string to add.
 * Return: The address of the new element, othewise NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int len = 0;
	char *dup;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;

	return (new);
}
