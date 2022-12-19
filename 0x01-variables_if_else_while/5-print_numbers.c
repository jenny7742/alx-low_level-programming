#include <stdio.h>

/**
 * main - entry point 
 * Return: always 0
 */
int main(void)
{
	int i;

	i = 0;
	
	while (i < 10)
	{
		putchar(i);
		i++;
	}
	printf("\n");
	return (0);
}
