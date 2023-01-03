#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts2 - prints every second character
 * @str: parameter
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			putchar(str[i]);
	}
	putchar('\n');
}
