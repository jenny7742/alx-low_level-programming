#include <stdio.h>

/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	char x;

	for (x = 0; x < 10; x++)
	{
		putchar(x);
	}
	for (x = 'a'; x < 'g'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
