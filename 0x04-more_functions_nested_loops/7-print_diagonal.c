#include <stdio.h>
#include " main.h"

/**
 * print_diagonal - prints lines and dashes
 * @n: parameter
 * return: always 0
 */
void print_diagonal(int n)
{
	int x, i;

	if (n <= 0)
		putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
		{
			for (i = 0; i <= x; i++)
				putchar(' ');
			putchar(92);
			putchar('\n');

		}
		putchar ('\n');
	}
}
