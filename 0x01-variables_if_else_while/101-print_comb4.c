#include <stdio.h>

/**
 * main - prints three digits combinations
 * Return: always 0
 */
int main(void)
{
	int i;
	int x;
	int a;

	i = 0;
	while (i < 10)
	{
		x = 0;
		while (x < 10)
		{
			a = 0;
			while (a < 10)
			{
				if (i != x && i != a && a != x &&
				    i < x && i < a && x < a)
				{
					putchar(48 + i);
					putchar(48 + x);
					putchar(48 + a);

					if (i + x + a != 24)
					{
						putchar(44);
						putchar(32);
					}
				}
				a++;
			}
			x++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
