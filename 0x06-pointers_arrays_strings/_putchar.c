#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the char c to stdout
 * @c: char to print
 * Return: on success 1
 * on error -1 and error is set appropriatley
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
