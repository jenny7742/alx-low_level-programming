#include <stdio.h>
#include "main.h"

/**
 * _strlen -> gives length of the string
 * @s: parameter
 * return: returns lens
 */
int _strlen(char *s)
{
	int len;

	for (; *s != '\0'; s++)
	{
		len += 1;
	}
	return (len);
}
