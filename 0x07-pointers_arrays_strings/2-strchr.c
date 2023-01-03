#include <stdio.h>
#include "main.h"

/**
 * _strchr - locates acharcter in astring
 * @c: parmeter
 * @s:parameter
 * Return: returns char
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}
	return (s + 1);
}
