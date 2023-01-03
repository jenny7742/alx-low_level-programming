#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - print the last digit
 * @x: parameter
 * Return: returns x
 */
int print_last_digit(int x)
{
	int nv;

	if (x < 0)
	{
		nv = -1 * (x % 10);
		putchar(nv + '0');
		return (nv);
	}
	else
	{
		nv = x % 10;
		putchar(nv + '0');
		return (nv);
	}
}
