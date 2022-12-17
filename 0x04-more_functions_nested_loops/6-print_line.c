#include <stdio.h>
#include "main.h"

/**
 * print_line - prints lines
 * @n: number of lines to be printed
 * Return: no return
 */
void print_line(int n)
{
	int x;

	if (n <= 0)
		putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
			putchar(95);
		putchar('\n');
	}
}
