#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	unsigned long n1 = 0, n2 = 1, n-sum;
	unsigned long n1-hf1, n1-hf2, n2-hf1, n2-hf2;
	unsigned long hf1, hf2;
	int wax;

	for (wax =0; wax < 92; wax++)
	{
		n-sum = n1 + n2;
		printf("%lu, ", n-sum);

		n1 = n2;
		n2 = n-sum;
	}

	n1-hf1 = n1 / 10000000;
	n2-hf1 = n2 / 10000000;
	n1-hf2 = n1 % 10000000;
	n2-hf2 = n2 % 10000000;

	for (wax = 93; wax < 99; wax++)
	{
		hf1 = n1-hf1 + n2-hf1;
		hf2 = n1-hf2 + n2-hf2;
		if (n1-hf2 + n2-hf2 > 9999999999)
		{
			hf1 += 1;
			hf2 %= 10000000000;
		}

		printf("%lu%lu", hf1, hf2);
		if (count != 98)
			printf(", ");

		n1-hf1 = n2-hf1;
		n1-hf2 = n2-hf2;
		n2-hf1 = hf1;
		n2-hf2 = hf2;
	}
	printf("\n");

	return (0);

}
