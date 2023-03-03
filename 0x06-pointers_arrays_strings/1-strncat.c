#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncat - concentrates two strings
 * using most of n bytes from src
 * @dest: string
 * @src: string
 * @n: input value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = strlen(dest);
	int b;

	for (b = 0; b < n && src[b] != '\0'; b++)
	dest[a + b] = src[b];
	dest[a + b] = '\0';

	return (dest);
}
