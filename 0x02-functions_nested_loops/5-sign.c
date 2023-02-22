#include "main.h"

/**
 * print_sign: - print sign of character n
 * @n: - character to be checked
 * Return: 1 print + if n is greater than 0
 * 0 print 0 if n is 0
 * -1 print - if n is less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return ('1');
	}
	
	(n == 0)
	{
	_putchar('0');
	return ('0');
	}
	
	(n < 0)
	{
	_putchar('-');
	return ('-1');
	}
}
