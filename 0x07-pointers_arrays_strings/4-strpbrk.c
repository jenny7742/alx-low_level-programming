#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - searhces for a stinrg
 * @s: parameter
 * @accept: parmetr
 * Return: return 0
 */
char *_strphbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (a < 10)
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}
	return (0);

}
