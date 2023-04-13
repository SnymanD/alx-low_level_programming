#include "main.h"
#include <stdlib.h>
/**
 * *array_range - a function that creates an array of integers.
 * @min: Minimum
 * @max: Maximum
 * Return: NULL
 */

int *array_range(int min, int max)
{
	int *s;
	int x = 0;

	if (min > max)
		return (NULL);

	s = malloc(sizeof(int) * (max - min) + sizeof(int));

	if (s == NULL)
		return (NULL);
	while (min <= max)
	{
		s[x] = min;
		x++;
		min++;
	}
		return (s);
}

