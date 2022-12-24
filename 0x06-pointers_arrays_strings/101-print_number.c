#include <stdio.h>
#include "main.h"

/**
 * print_number - prints integers
 * @n: parameter
 * Return: no return
 */
void print_number(int n)
{
	unsigned int m;

	if (m < 0)
	{
		putchar('-');
		m = -n;
	}
	else
	{
		m = n;
	}

	if ((m / 10) != 0)
	{
		print_number(m / 10);
	}
	putchar((m % 10) + '0');
}
