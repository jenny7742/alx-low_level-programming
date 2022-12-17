#include <stdio.h>
#include "main.h"

/**
 * print_number - prints numbers
 * @n: takes numbers
 * Return: no return
 */
void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{
		putchar('-');
		m = -n;
	}
	else
	{
		m = n;
	}
	if (m / 10 != 0)
		print_number(m / 10);
	putchar((m % 10) + '0');
}
