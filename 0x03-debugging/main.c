#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"


/**
 * positive_or_negative - finds postive or negative
 * @i: parameter
 * Return: always 0
 */
void positive_or_negative(int i)
{
	int n;



	srand(time(0));

	n = i;

	if (n < 0)
		printf("%d is positive\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else
		printf("%d is zero\n", n);
}
/**
 * main - Entry point
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
