#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy - copies string
 * @dest: parameter
 * @src: parameter
 * @n: parametr
 * Return: retruns dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	strcpy(dest, src, n);
	return (dest);

}
