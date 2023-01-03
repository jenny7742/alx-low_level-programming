#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * positive_or_negative - sign checker
 * @i: parameter
 * Return: no return
 */

void positive_or_negative(int i)
{
	int n;



	srand(time(0));

	n = i;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
}

/**
 * main - test for positive or negative integers
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	i = 0;
	positive_or_negative(i);

	return (0);
}
