#include <stdio.h>
#include "main.h"

/**
 * swap_int -  swaps the value of two integers
 * @a: parameter
 * @b: parameter
 */
void swap_int(int *a, int *b)
{
	int wax;

	wax = *a;
	*a =  *b;
	*b = wax;
}
