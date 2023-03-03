#include <stdio.h>
#include "main.h"

/**
 * cap_string -  capitalizes all words of a string
 * @str: string to be capitalized
 * Return: changed string
 */
char *cap_string(char *str)
{
	int i;
	char c;

	for (i = 0; str[i] != '\0'; i++)
	{
	c = str[i];
	if (str[i - 1] == ' ' ||
	str[i - 1] == '\t' ||
	str[i - 1] == '\n' ||
	str[i - 1] == ',' ||
	str[i - 1] == ';' ||
	str[i - 1] == '.' ||
	str[i - 1] == '!' ||
	str[i - 1] == '?' ||
	str[i - 1] == '"' ||
	str[i - 1] == '(' ||
	str[i - 1] == ')' ||
	str[i - 1] == '{' ||
	str[i - 1] == '}')
	{
	if (c >= 'a' && c <= 'z')
	c = c - 32;
	}
	str[i] = c;
	}
	return (str);
}
