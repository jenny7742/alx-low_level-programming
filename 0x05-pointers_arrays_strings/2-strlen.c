#include <stdio.h>
#include "main.h"

/**
 * _strlen -> gives length of the string
 * @s: parameter
 * Return: returns len
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);

}
