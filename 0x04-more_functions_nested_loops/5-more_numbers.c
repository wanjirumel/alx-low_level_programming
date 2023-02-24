#include "main.h"
#include <stdio.h>
/**
 * more_numbers - print numbers from 0-14 10 times
 * Return: void
 */
void more_numbers(void)
{
	int c, a;

	for (c = '1'; c <= 10; c++)
	{
	for (a = '0'; a <= 14; a++)
	{
	if (a >= 10)
	_putchar('1');
	_putchar (a % 10 + ('0'));
	}
	_putchar('\n');
	}
}
