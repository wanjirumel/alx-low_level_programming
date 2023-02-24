#include "main.h"
#include <stdio.h>

/**
 * print_line - draws straight line in the terminal
 * @n: number of times character is printed
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	int c;

	for (c = 1; c <= n; c++)
	{
	_putchar('_');
	}
	_putchar('\n');
	}
}
