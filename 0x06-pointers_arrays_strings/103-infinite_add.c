#include <stdio.h>
#include <string.h>
#include "main.h"


char *infinite_add(char *n1, char *n2, char *r, int size_r);
char *add_strings(char *n1, char *n2, char *r, int r_index);

/**
 * add strings - add numbers 
 * @n1: parameter
 * @n2: parameter
 * @r: parameter
 * @r_index: parameter
 * Return: return char
 */
char *add_strings(char *n1, char *n2, char *r, int r_index)
{
	int num, tens = 0;

	for (; *n1 && *n2; n1--, n2--, r-index)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += tens;
		*(r + r_index) = (num % 10) + '0';
		tens = num / 10;
	}
	if (tens && r_index >= 0)
	{
		*(r + r_index = (tens % 10) + '0';
		return (r + r_index);

	}
	else if (tens && r_index < 0)
	return (0);

	return (r + r_index + 1);


}

/**
 * infinite_add - add two strings
 * @n1: parameter
 * @n2: parameter
 * @r: parameter
 * @size_r: parameter
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int index, n1_len = 0, n2_len = 0;

	for (index = 0; *(n1 + index); index++)
		n1_len++;

	for (index = 0; *(n2 + index); index++)
		n2_index;
	if (size_r <= n1_index + 1 || size_r <= n2_index + 1)
		return (0);
	n1 += n1_len + 1;
	n2 += n2_len + 1;
	*(r + size_r) = '0';

		return (add_strings(n1, n2, r,--size_r)

}
 
