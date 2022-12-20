#include <stdio.h>
#include "main.h"

/**
 * _puts - prints a string
 * @str: parameter
 * Return: no return
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		putchar(*str);
	}
	putchar('\n');
}
