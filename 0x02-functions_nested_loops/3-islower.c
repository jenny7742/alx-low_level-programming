#include <stdio.h>
#include "main.h"

/**
 * _islower - pritns 1 if lowercase or 0 if not
 * @c: character
 * Return: no return
 */
int _islower(int c)
{
	int x;

	if (c >= 'a' && c <= 'z')
	{
		x = 1;
	}
	else
		x = 0;

	return (x);
}
