#include  <stdio.h>
#include <string.h>
#include "main.h"

/**
 * string_toupper - changes from uppercase
 * @str: parameter
 * Return: return str
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] -= 32;
		}
		index++;
	}
	return (str);
}
