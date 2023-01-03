#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: no return
 */
int main(void)
{
	int a = 0;
	int b;

	while (a <= 98)
	{
		b = 0;
		while (b <= 99)
		{
			putchar(a / 10 + '0');
			putchar(a % 10 + '0');
			putchar(' ');
			putchar(b / 10 + '0');
			putchar(b % 10 + '0');

			if (a != 98 || b != 99)
			{
				putchar(',');
				putchar(' ');
			}
			b += 1;
		}
		a += 1;
	}
	putchar('\n');

	return (0);
}
