#include <stdio.h>
#include "main.h"

/**
 * _memcpy - copies memoyr area
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: returns char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *yolo;

	yolo = dest;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (yolo);
}
