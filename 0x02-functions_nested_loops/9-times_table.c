#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 * Return: always 0
 */

void times_table(void)

{
	int a, b, x, c, d;

	for (a = 0; a <= 9; a++)
	{
	for (b = 0; b <= 9; b++)
	{
	x = a * b;
	if (x > 9)
	{
	c = x % 10;
	d = (x - c) / 10;
	_putchar(44);
	_putchar(32);
	_putchar(d + '0');
	_putchar(c + '0');
	}
	else
	{
	if (b != 0)
	{
	_putchar(44);
	_putchar(32);
	_putchar(32);
	}
	_putchar(x + '0');
	}
	}
	_putchar('\n');
	}
}
