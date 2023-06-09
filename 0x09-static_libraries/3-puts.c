#include "main.h"

/**
 * _puts - Prints a string to stdout
 * @str: A pointer to the string to print out
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
