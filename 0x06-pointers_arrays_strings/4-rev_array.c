#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: parameter
 * @n: parameter
 */
void reverse_array(int *a, int n)
{
	int *p, i, aux, k;

	p = a;
	for (i = 0; i < n; i++)
		p++;
	for (k = 0; k < i / 2; k++)
	{
		aux = a[k];
		a[k] = *p;
		*p = aux;


	}
}
