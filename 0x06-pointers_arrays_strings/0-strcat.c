#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * _strcat - concentrates two strings
 * @dest: string
 * @src: string
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int a = strlen(dest);
	int b;

	for (b = 0; src[b] != '\0'; b++)
	dest[a + b] = src[b];

	dest[a + b] = '\0';
	return (dest);
}
