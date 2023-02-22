#include <unistd.h>

/**
 * _putchar -writes the character c to stdout
 * @c: The charater to print
 * Return: (1) success
 * Error, -1 is returned, and error is set appropriatley
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
