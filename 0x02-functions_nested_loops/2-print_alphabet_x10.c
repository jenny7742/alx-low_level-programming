#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 -  pritns a to z 10 times
 * Return: no return
 */
void print_alphabet_x10(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		j = 'a';
		while (j <= 'z')
		{
			putchar(j);
			j++;
		}
		putchar('\n');
		i++;
	}
}
