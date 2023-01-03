#include <stdio.h>
#include "main.h"

/**
 * _memset - fils memory with constant byte
 * @s: parameter
 * @b: paameter
 * @n: parameter
 * Return: returns char
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
