#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @r: - number to be checked
 * Return: - last digit
 */
int print_last_digit(int r)
{
	int ltd;

	ltd = r % 10;
	if (ltd < 0)
	{
	ltd = ltd * -1;
	}

	_putchar(ltd + '0');
	return (ltd);
}
