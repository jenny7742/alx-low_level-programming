#include <stdio.h>
#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: parameter
 * Return: returns 1 or 0 or -1
 */
int print_sign(int n)
{
	int x;

	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}
