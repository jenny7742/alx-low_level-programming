#include <stdio.h>

/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	int n;

	n = 0;

	while (n < 10)
	{
		putchar(48 + n);
		n++;
	}
	putchar('\n');
	return (0);
}
