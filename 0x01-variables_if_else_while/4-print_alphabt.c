#include <stdio.h>

/**
 * main - entry point
 * Description: prints lower alphabets except q and e
 * Return: no return
 */
int main(void)
{
	char c;

	c = 'a';

	while (c <= z)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
