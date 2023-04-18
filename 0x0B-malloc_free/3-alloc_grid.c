#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - A function that returns a pointer to a 2-D array
 *@width: Width
 * Return: NULL on failure
 * @height: Height
 */

int **alloc_grid(int width, int height)
{
	int x, y, z, w;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);
	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		a[x] = malloc(sizeof(int) * width);
		if (a[x] == NULL)
		{
			for (y = x; y >= 0; y--)
			{
				free(a[y]);
			}
				free(a);
				return (NULL);
		}
	}
	for (z = 0; z < height; z++)
	{
		for (w = 0; w < width; w++)
		{
			a[z][w] = 0;
		}
	}
		return (a);
}
