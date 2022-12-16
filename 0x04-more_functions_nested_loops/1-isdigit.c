#include "main.h"

/**
 * _isdigit - check for a digit
 * @c: tested character
 * Return: returns 1 if it is a digit or 0 if not
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
