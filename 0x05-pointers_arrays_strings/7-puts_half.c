#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: parameter
 */
void puts_half(char *str)
{
	int x, y, i;

	x = strlen(str);
	if (x % 2)
		y =  (x / 2) + 1;
	else
		y = x / 2;
	for (i = y; i < x; i++)
		putchar(str[i]);
	putchar('\n');
}
