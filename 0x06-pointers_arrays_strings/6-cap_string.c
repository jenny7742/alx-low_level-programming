#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * cap_string - Capitalizes all wordsd
 * @str: parameter
 * Return: returns str
 */

char *cap_string(char *str)
{
	char tex [] = {32, 9, '\n', ',', ';', '.', '!', '?' '"', '(', ')', '{', '}'};

	int i = 0, j;
	int len = 13;

	while (str[i])
	{
		j = 0;
		while ( i < j)
		{
			if ((i == 0 || str[i - 1] == tex[j]) && (str[i] >= 97 && str[i] <= 122))
				str[i] = str[i] - 32;
			j++;
		}
		i++;
	}
	return (str);
}
