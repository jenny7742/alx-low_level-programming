#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	unsigned long n1 = 0, n2 = 1, n_sum;
	unsigned long n1_hf1, n1_hf2, n2_hf1, n2_hf2;
	unsigned long hf1, hf2;
	int wax;

	for (wax = 0; wax < 92; wax++)
	{
		n_sum = n1 + n2;
		printf("%lu, ", n_sum);

		n1 = n2;
		n2 = n_sum;
	}

	n1_hf1 = n1 / 10000000;
	n2_hf1 = n2 / 10000000;
	n1_hf2 = n1 % 10000000;
	n2_hf2 = n2 % 10000000;

	for (wax = 93; wax < 99; wax++)
	{
		hf1 = n1_hf1 + n2_hf1;
		hf2 = n1_hf2 + n2_hf2;
		if (n1_hf2 + n2_hf2 > 9999999999)
		{
			hf1 += 1;
			hf2 %= 10000000000;
		}

		printf("%lu%lu", hf1, hf2);
		if (wax != 98)
			printf(", ");

		n1_hf1 = n2_hf1;
		n1_hf2 = n2_hf2;
		n2_hf1 = hf1;
		n2_hf2 = hf2;
	}
	printf("\n");

	return (0);

}
