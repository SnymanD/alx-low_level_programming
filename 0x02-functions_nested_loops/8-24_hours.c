#include "main.h"
/**
 * Description: jack_bauer - Prints every minute
 * Return: no return
 */

void jack_bauer(void)
{
	int u, v, w, y;

	for (u = 0; u <= 2; u++)
	{
		for (v = 0; v <= 9; v++)
		{
			for (w = 0; w <= 5; w++)
			{
				for (y = 0; y <= 9; y++)
				{
					if (u >= 2 && v >= 4)
					break;
					_putchar(u + 48);
					_putchar(v + 48);
					_putchar(58);
					_putchar(w + 48);
					_putchar(y + 48);
					_putchar('\n');
				}
			}
		}
	}
}

