#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - mirror view
 * @s: parameter
 */
void rev_string(char *s)
{
	int len, i;
	char *start, *end, temp;

	len = strlen(s);
	start = s;
	end = s + len - 1;

	for (i = 0; i < len - 1; i++)
	{
		end++;
	}
	for (i = 0; i < (len - 1) / 2; i++)
	{
		temp = *end;
		*end = *start;
		*start = temp;

		start++;
		end--;
	}
}
