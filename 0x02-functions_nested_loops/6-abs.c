#include <stdio.h>
#include "main.h"

/**
 * _abs - prints absolute value of an integer
 * @x: parameter
 * Return: returns x
 */
int _abs(int x)
{
	int c;

	if (x < 0)
	{
		c = x - (x * 2);
	}
	else
	{
		c = x;
	}

	return (c);
}
