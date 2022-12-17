#include <stdio.h>
#include "main.h"


/**
 * fizz_buzz - creating fizz buzz
 * return: always 0
 */
void fizz_buzz(void)
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
}
