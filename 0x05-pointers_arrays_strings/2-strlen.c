#include "main.h"
#include <stdio.h>
/**
 * _strlen - returns length of a string
 * @s: string to be checked
 * Return: void
 */
int _strlen(char *s)
{
	int a;

	a = 0;
	while (*s != '\0')
	{
	a++;
	s++;
	}
	return (a);
}
