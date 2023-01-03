#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @c: parameter
 * Return: return x
 */
int print_last_digit(int c)
{
	c %= 10;

	if (c < 0)
	{
		c *= -1;
	}
	putchar(c +'0');

	return (c);
}
