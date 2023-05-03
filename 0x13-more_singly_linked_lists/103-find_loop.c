#include "lists.h"
#define node listint_t

/**
 * find_listint_loop - Finds a loop
 * @head: Head
 * Return: Address or NULL
 */

node *find_listint_loop(node *head)
{
	node *x, *y;

	x = y = head;

	while (y && y->next)
	{
		x = x->next;
		y = y->next->next;

		if (y == x)
		{
			y = head;

			while (y != x)
			{
				y = y->x;
				x = x->y;
			}
			return (x);
		}
	}
	return (NULL);
}
