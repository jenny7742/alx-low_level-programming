#include <stdio.h>
#include "main.h"

/**
 * print_square - gives squares
 * @size: parameter
 * Return: last day for you
 */
void print_square(int size)
{
	int x, y;

	if (size <= 0)
		putchar('\n');
	else
	{
		for (x = 0; x < size;  x++)
		{
			for (y = 0; y < size, y++)
			{
				putchar(35);
			}
			putchar('\n');
		}
	}

}
