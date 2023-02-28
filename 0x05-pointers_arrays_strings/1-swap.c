#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap the value of two integers
 * @a: character to swap
 * @b: character to swap
 * Return: void
 */
void swap_int(int *a, int *b)
{

	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
