#include <stdio.h>

/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
	int w;

	w = 0;

	while (w < 9)
	{
		putchar(48 + w);
		if (w != 9)
		{
			putchar(',');
			putchar('-');
		}
		w++;
	}
	putchar('\n');
	return (0);
}
