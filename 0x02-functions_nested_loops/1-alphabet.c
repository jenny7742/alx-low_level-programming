#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints alphabets a to z
 * Return: no return
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
}

int main()
{
	print_alphabet();
	return (0);

}
