#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap the value of two integers
 * @*a: int to swap
 * @*b: int to swap
 * Return: void
 */
void swap_int(int *a, int *b)
{

	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
