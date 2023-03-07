#include <stdio.h>
#include "main.h"
/**
 * *_strstr - function that locates a substring
 * @haystack: character
 * @needle: character
 * Return: if substring located - pointer is located at the string
 * if substring not located - NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
	for (j = 0; needle[j] != '\0')
	while (haystack[i + j] == needle[j]; j++);
	if (needle[j] == '\0')
	return (&haystack[i]);
	}
	return (NULL);
}
