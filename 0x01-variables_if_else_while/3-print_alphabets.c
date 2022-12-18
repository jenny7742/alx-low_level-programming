#include <stdio.h>

/**
 * main - Entry point
 * Description: prints alphabet in lowercase and uppercase
 * Return: always 0
 */
int main(void)
{
	char c;
	char n;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	n = 'A';
	while (n <= 'Z')
	{
		putchar(n);
		n++;

	}
	putchar('\n');
	return (0);
}
