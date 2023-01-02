#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	unsigned long n1 = 0, n2 = 1, n_Sum;
	float total;

	while (1)
	{
		n_Sum = n1 + n2;

		if (n_Sum > 4000000)
			break;
		if ((n_Sum % 2) == 0)
		{
			total += n_Sum;
		}
		n1 = n2;
		n2 = n_Sum;
	}
	printf("%.0f\n", total);
	return (0);
}
