#include <stdio.h>
#include "main.h"

/**
 * print_numbers - print 0 to 9
 * Return: always 0
 */
void print_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
}
