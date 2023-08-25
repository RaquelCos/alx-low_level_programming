#include <unistd.h>

/**
 * _putchar - Writes char c to stdout
 * @c: Char to print
 *
 * Return: 1 - sucess, -1 - error and errno is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
