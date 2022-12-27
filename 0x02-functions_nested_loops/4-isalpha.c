#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @c: charcter to check
 * Return: return 1 or 0
 */
int _isalpha(int c)
{
	int x;

	if (c >= 'a' && c <= 'z' ||
		c >= 'A' && c <= 'Z')
		x = 1;
	else
		x = 0;

	return (x);
}
