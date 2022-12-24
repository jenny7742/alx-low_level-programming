#include <stdio.h>

/**
 * main - prints all single digit  from 0 to 9
 *
 * Return: always 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
