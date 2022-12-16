#include <stdio.h>
#include "main.h"

/**
 * print_line - prints lines
 * @n: number of lines to be printed
 * Return: no return
 */
void print_line(int n)
{
	while (n-- > 0)
	{
		putchar('-');
	}
	putchar('\n');
}
