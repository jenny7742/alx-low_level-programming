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
	int len = strlen(str);

	for (i = 0; i < len; i += 2)
	{
		putchar(str[i]);
	}
}
