#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints to 98
 * @x: parameter
 * Return:  no retur
 */
void print_to_98(int n)
{
	int x = 98;

	if (n < x)
	{
		putchar(n + '0');
		n++;

		if (n != 98)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}
	}
	else if (n > x)
	{
		putchar(n + '0');
		n--;

		if (n != 98)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}
	}
	else
	{
		putchar(n + '0');
	}
}
int main()
{
	print_to_98(50);

	return (0);
}
