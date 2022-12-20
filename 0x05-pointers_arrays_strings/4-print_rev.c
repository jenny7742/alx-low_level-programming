#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - prints in reverse
 * @s: parameter
 */
void print_rev(char *s)
{
	int len, i;
	char *start, *end, temp;

	len = strlen(s);
	start = s;
	end = s + len - 1;

	for (i = 0; i < (len - 1) / 2; i++)
	{
		temp = *end;
		*end = *start;
		*start = temp;

		start++;
		end--;
	}
}
