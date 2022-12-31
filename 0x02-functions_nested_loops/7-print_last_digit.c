#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @c: parameter
 * Return: return x
 */
int print_last_digit(int c)
{
	int x = c % 10;

	if (x < 0)
		x *= -1;

	putchar(x + '0');

	return (x);
}
