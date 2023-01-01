#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: always 0
 */
int main(void)
{
	int sum = 0, x;

	for (x = 0; x < 1024; x++)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
			sum += x;
		}
	}
	printf("%d\n", sum);
	return (0);
}
