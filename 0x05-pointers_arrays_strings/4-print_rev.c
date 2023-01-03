#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - prints in reverse
 * @s: parameter
 */
void print_rev(char *s)
{
	int len = 0, index;

	while (s[index++])
		len++;

	for (index = len - 1; index >= 0; index--)
		putchar(s[index]);

	putchar('\n');
}
