#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - draws diogonal line i the terminal
 * @n: - the number of times character is printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	int c, b;

	for (c = 0; c < n; c++)
	{
	for (b = 0; b < n; b++)
	{
	if (b == c)
	_putchar('\\');
	else if
	(b < c)
	_putchar(' ');
	}
	_putchar('\n');
	}
	}
}
