#include "main.h"

/**
 * __puts_recursion - prints out a string and then followed by a new line
 * @s: string to print
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return 0;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
