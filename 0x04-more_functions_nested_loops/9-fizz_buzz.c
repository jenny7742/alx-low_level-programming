#include <stdio.h>
#include <stlib.h>


/**
 * main - Entry point
 * @x: parameter
 * Return: always 0
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 15 == 0)
			printf(" fizzBuzz");
		else if (x % 3  == 0)
			printf(" fizz");
		else if (x % 5 == 0)
			printf(" buzz");
		else
			printf(" %d", x);


	}
	printf("\n");
	return (0);
}
