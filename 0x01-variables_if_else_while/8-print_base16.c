#include <stdio.h>

/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	char x;

	for (x = '0'; x < '10'; x++)
	{
		putchar(x);
		x++;
	}
	for (x = 'a'; x <= 'f'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
