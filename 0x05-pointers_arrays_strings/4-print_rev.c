#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - prints in reverse
 * @s: parameter
 */
void print_rev(char *s)
{
	int i;

	while (*(s + i) != '\0')
		i += 1;
	i -= 1;
	while (i >= 0)
	{
		putchar(*(s + i));
		i--;
	}
	putchar('\n');
}
