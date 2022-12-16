#include "main.h"

/**
 * print_numbers - prints number from 0 to 9
 * return: no return
 */
void print_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
