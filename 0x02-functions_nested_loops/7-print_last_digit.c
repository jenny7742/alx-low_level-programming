#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @c: parameter
 * Return: return x
 */
int print_last_digit(int c)
{
	int x;

	if (c < 0)
	{
		x = (c - (c * 2)) % 10;
	}
	else
	{
		x = c % 10;
	}
	return (x);
}
