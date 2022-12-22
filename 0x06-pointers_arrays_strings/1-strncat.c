#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: parameter
 * Return: return char
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0;

	while (dest[x])
		x++;
	for (n = 0; src[n] != '\0'; n++)
	{
		dest[x] = src[n];
		x += 1;
	}
	dest[x] = '\0';
	return (dest);
}
