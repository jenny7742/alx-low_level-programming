#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int wax;
	unsigned long n1 = 0, n2 = 1, sum;

	for (wax = 0; wax < 50; wax++)
	{
		sum = n1 + n2;
		printf("%lu", sum);

		n1 = n2;
		n2 = sum;

		if (wax == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
