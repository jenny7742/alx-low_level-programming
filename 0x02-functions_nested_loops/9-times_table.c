#include <stdio.h>
#include "main.h"

/**
 * times_table - prints times table
 * Return: no return
 */
void times_table(void)
{
	int x;
	int z;
	int y;

	x = 0;
	while (x < 10)
	{
		y = 0;
		while (y < 10)
		{
			z = x * y;

			if (z > 9)
			{
				putchar((z / 10) + '0');
				putchar((z % 10) + '0');
			}
			else if (y != 0)
			{
				putchar(' ');
				putchar(z + '0');
			}
			else
			{
				putchar(z + '0');
			}
			if (y != 9)
			{
				putchar(',');
				putchar(' ');
			}
			y++;
		}
		putchar('\n');
		x++;
	}
}
